#include "temp.hpp"
#include <iostream>
#include <cassert>

double temp::from_kelvin(double temp, temp::temp_scale scale) {
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
