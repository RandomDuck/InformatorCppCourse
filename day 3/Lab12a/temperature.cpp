#include "temperature.h"
#include <cassert>
#include <sstream>

double from_kelvin(double temp, temp_scale scale) {
  assert(temp > 0);
  switch (scale) {
    case temp_scale::Kelvin:
    return temp;
    case temp_scale::Celsius:
    return temp-273.15;
    case temp_scale::Fahrenheit:
    return 1.8 * temp - 459.67;
    case temp_scale::Rankine:
    return temp*1.8;
    default:
    assert(false);
  }
}


temperature::temperature(unsigned long temp) :
  measurement(temp)
{
  std::string error{"Temperature should not be below " + std::to_string(ABSOLUTE_ZERO) + " but was " + std::to_string(temp)};
  if (temp < ABSOLUTE_ZERO) throw error;
}


double temperature::value() const {
  return (raw_value()-ABSOLUTE_ZERO) / 135.0;
}
