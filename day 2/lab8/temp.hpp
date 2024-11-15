#include <iostream>

namespace temp {
  enum class temp_scale{Kelvin, Fahrenheit, Celsius, Rankine}; // enum of different temperature scales
  double from_kelvin(double temp, temp_scale scale) ; // convert Kelvin into chosen temperature scale 
  //NOTE: temps below absolute zero (566) will throw error

  class temperature { // handle and store data provided by a temperature sensor
    private:
      unsigned long data{}; // raw messurement
      std::time_t time{};
    public:
      temperature(unsigned long temp); // expects a positive value, will throw exception

      unsigned long raw_value();

      double value();

      std::time_t time_stamp();
  };
}
