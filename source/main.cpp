#include <nds.h>
#include <iostream>

// returning auto is allowed in C++14
auto say_hello() noexcept
{
  const std::string s = "Hello NDS";
  return s;
}

int main()
{
  //consoleDemoInit is obligatory
  consoleDemoInit();

  std::cout << say_hello() << '\n';

  //Infinite waiting
  while (1) {}
}
