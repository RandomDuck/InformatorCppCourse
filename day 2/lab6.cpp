#include <iostream>
#include <cassert>

enum class temp_scale{Kelvin, Fahrenheit, Celsius, Rankine};

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

int main()
{
  std::cout << from_kelvin(295, temp_scale::Fahrenheit) << std::endl;  // expected: 71.33
  std::cout << from_kelvin(295, temp_scale::Celsius) << std::endl;  // expected: 21.85
  std::cout << from_kelvin(295, temp_scale::Rankine) << std::endl;  // expected: 531
  std::cout << from_kelvin(-1, temp_scale::Fahrenheit) << std::endl;  // expected: undefined
}
