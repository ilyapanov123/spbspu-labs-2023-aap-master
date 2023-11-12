#include <iostream>
#include <exception>
#include "nchar.hpp"
#include "numOfchar.hpp"

int main()
{
  ranov::NumOfchar numOfchar;
  panov::Nchar nchar;
  try
  {
    std::cin.exceptions(std::istream::failbit);
    int value = 0;
    int c = 0;
    do
    {
      std::cin >> value;
      numOfchar(value);
    }
    while ((value != 0) || (c != 0));
  }
  catch (const std::istream::failure & e)
  {
    std::cerr << "OnlyNumberPLS" << "\n";
    return 1;
  }
  catch (const std::logic_error& e)
  {
    std::cerr << e.what() << "\n";
    return 1;
  }
  std::cout << "first\n";
  std::cout << numOfchar() << "\n";
  std::cout << "first\n";
  std::cout << nchar() << "\n";
  return 0;
}
