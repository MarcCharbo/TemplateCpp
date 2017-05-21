#include <iostream>

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

  return 0;
}