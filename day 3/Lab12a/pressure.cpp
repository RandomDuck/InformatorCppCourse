#include "pressure.h"
#include <iostream>
#include <string>
pressure::pressure(unsigned long data)
  : measurement{ data }
{
  std::string error{"Pressure should not be below " + std::to_string(ABSOLUTE_ZERO) + " but was " + std::to_string(data)};
  if (data < ABSOLUTE_ZERO) throw error;
}

double pressure::value() const 
{
  return (raw_value() - ABSOLUTE_ZERO) / 4.0;
}
