// temperature.h

#ifndef temperature_h__
#define temperature_h__

#include <ctime>  // std::time_t

// Storing and converting measured temperature values into Kelvin
// and storing the time of the measurement
class temperature
{
public:
  temperature(unsigned long);

  unsigned long raw_value();
  double value(); // measure converted into Kelvin
  std::time_t time_stamp();

private:
  unsigned long data; // raw measurement value
  std::time_t time; // seconds since epoch
};

// Helper type for setting a temperature scale
enum class temp_scale { Kelvin, Celsius, Fahrenheit, Rankine };

// Utility to convert a Kelvin value into other scales
double from_kelvin(double, temp_scale);

#endif
