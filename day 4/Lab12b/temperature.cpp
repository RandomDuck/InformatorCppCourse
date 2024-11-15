#include "temperature.h"

temperature::temperature(unsigned long data)
  : measurement{ data }
{
}

double temperature::value() const // converts into Kelvin
{
  return (raw_value() - ABSOLUTE_ZERO) / 135.0;
}

double from_kelvin(double temp, temp_scale scale)
{
  switch (scale)
  {
  default: // Fall through, temporary solution to get rid of warnings,
    // will be improved later
  case  temp_scale::Kelvin: return temp; // no need for break
  case  temp_scale::Celsius: return temp - 273.15;
  case  temp_scale::Fahrenheit: return 1.8 * temp - 459.67;
  case  temp_scale::Rankine: return 1.8 * temp;
  }
}
