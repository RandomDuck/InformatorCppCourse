#include "measurement.h"
#include "pressure.h"
#include "temperature.h"
#include <iostream>

int main()
{
  measurement* tp{new temperature{12345}};
  std::cout << tp->value() << " Kelvin" << std::endl; // expected: 87.2519

  delete tp;
  tp = new pressure{ 12345};
  std::cout << tp->value() << " Pascal" << std::endl; // expected: 3064
  
  delete tp;
}
