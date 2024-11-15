#include "temp.hpp"
#include <iostream>
#include <iomanip>

int main() {
  try {
    for (unsigned long raw{566}; raw < 1000000001UL; raw += 1350000) {
      temp::temperature t{raw};
      std::cout << std::setprecision(10) << t.value() << " Kelvin at " << t.time_stamp() << " seconds after epoch" << std::endl;
    }
    // expected: temperatures from 0 to 7407000 Kelvin

    temp::temperature t{565};  // not valid
    std::cout << t.value() << std::endl;  // expected: undefined
  } catch (const char* e) {
    std::cout << "Error: " << e << std::endl;
  }
    std::cout << temp::from_kelvin(295, temp::temp_scale::Fahrenheit) << std::endl;  // expected: 71.33
    std::cout << temp::from_kelvin(295, temp::temp_scale::Celsius) << std::endl;  // expected: 21.85
    std::cout << temp::from_kelvin(295, temp::temp_scale::Rankine) << std::endl;  // expected: 531
    std::cout << temp::from_kelvin(-1, temp::temp_scale::Fahrenheit) << std::endl;  // expected: undefined
}
