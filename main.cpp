#include "gtest/gtest.h"
#include "MyCollection.h"

template <typename T>
T fact (T n)
{
  return (n < 2 ? 1 : n * fact(n-1));
}

int main() {


  auto i = fact<int>(6);
  std::cout << i << std::endl;

  auto d = fact<double>(6.5);
  std::cout << d << std::endl;

  auto f = fact<float >(3.14);
  std::cout << f << std::endl;

  MyCollection<int> vector1;
  vector1.Add(1);
  vector1.Add(2);
  vector1.Add(3);
  vector1.Add(4);


  vector1.PrintAll(std::cout);
  std::cout<<std::endl;
  vector1.PrintAllReverseOrder(std::cout);
  std::cout<<std::endl;

  //vector1.Count();
  std::cout<<vector1.IsEmpty()<<std::endl;
  std::cout<<vector1.Count()<<std::endl;
  std::cout<<vector1.Get(1)<<std::endl;

  MyCollection<double> vector2{};

//  TEST(basic_check,test_eq){
//    EXPECT_EQ(1,0);
//  }
  return 0;
}