#include "pressure.h"
#include "temperature.h"
#include <iostream>
#include <string>

int main()
{
  try {
  temperature t{5661};
  std::cout << t.value() << " Kelvin" << std::endl; // expected: 87.2519
  pressure p{891};
  std::cout << p.value() << " Pascal" << std::endl; // expected 3064
  } catch (std::string e) {
    std::cout << e << std::endl;
  }
}
