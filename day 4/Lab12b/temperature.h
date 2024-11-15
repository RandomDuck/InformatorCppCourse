#ifndef temperature_h__
#define temperature_h__

#include "measurement.h"
#include <ctime>

// Class temperature, a derived class specific for measured temperatures.
// Converts into Kelvin
class temperature final: public measurement
{
  // no extended data members
public:
  explicit temperature(unsigned long data);
  double value() const override;
  static constexpr unsigned long ABSOLUTE_ZERO{ 566UL };
};

// Helper type for setting a temperature scale
enum class temp_scale { Kelvin, Celsius, Fahrenheit, Rankine };

// Utility to convert a Kelvin value into other scales
double from_kelvin(double, temp_scale);

#endif
