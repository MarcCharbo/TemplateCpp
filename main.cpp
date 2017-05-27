#include "gtest/gtest.h"
#include "MyCollection.h"

//Q1 Function Template
template <typename T>
T fact (T n)
{
  return (n < 2 ? 1 : n * fact(n-1));
}

//Q1 Tests
TEST(TemplateTest,fact_int){
  auto i = fact<int>(3);
  std::cout << i << std::endl;
  EXPECT_EQ(i,6);
}

TEST(TemplateTest,fact_double){
  auto i = fact<double>(3.5);
  std::cout << i << std::endl;
  EXPECT_NEAR(i,8.75,0.00001);
}

TEST(TemplateTest,fact_float){
  auto i = fact<float>(3.25);
  std::cout << i << std::endl;
  EXPECT_NEAR(i,7.3125,0.00001);
}

//Q2 template int
TEST(TemplateTest,class_templ_int){
  // int
  MyCollection<int> vector1;
  vector1.Add(1);
  vector1.Add(2);
  vector1.Add(3);
  vector1.Add(4);

  ASSERT_EQ(vector1.IsEmpty(),0);
  ASSERT_EQ(vector1.Count(),4);
  ASSERT_EQ(vector1.Get(2),3);

  // Print
  std::cout<<"Print all: "<<std::endl;
  vector1.PrintAll(std::cout);
  std::cout<<std::endl;
  std::cout<<"Print all reverse: "<<std::endl;
  vector1.PrintAllReverseOrder(std::cout);
  std::cout<<std::endl;
  std::cout<<std::endl;
}

//Q2 template circle obj
TEST(TemplateTest,class_templ_circle){
  // circle obj
  const char *kName1 = "Circle#1";
  const char *kName2 = "Circle#2";
  const char* kName3 = "Circle#3";
  Circle c1(1, 0, 0, kName1);
  Circle c2(2, 3, 4, kName2);
  Circle c3(5, 10, 15, kName3);

  MyCollection<Circle> vector3{};
  vector3.Add(c1);
  vector3.Add(c2);
  vector3.Add(c3);

  ASSERT_EQ(vector3.IsEmpty(),0);
  ASSERT_EQ(vector3.Count(),3);

  // Print
  std::cout<<"Print all: "<<std::endl;
  vector3.PrintAll(std::cout);
  std::cout<<std::endl;
  std::cout<<"Print all reverse: "<<std::endl;
  vector3.PrintAllReverseOrder(std::cout);
  std::cout<<std::endl;
  std::cout<<std::endl;
}

int main(int ac, char* av[]) {

  testing::InitGoogleTest(&ac, av);
  return RUN_ALL_TESTS();

  return 0;
}