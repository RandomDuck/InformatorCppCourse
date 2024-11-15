// temperature.cpp

#include "temperature.h"

// Constructor stores the raw value and a time stamp
temperature::temperature(unsigned long d)
  : data{d}, time{std::time(nullptr)}
{
}

unsigned long temperature::raw_value()
{
  return data;
}

double temperature::value() // converts data into Kelvin
{
  return (data - 566) / 135.0;
}

std::time_t temperature::time_stamp()
{
  return time;
}

double from_kelvin(double temp, temp_scale scale)
{
  switch (scale)
  {
    default: // Fall through, temporary solution to get rid of warnings,
      // will be improved later
    case temp_scale::Kelvin:
      return temp; // no need for break
    case temp_scale::Celsius:
      return temp - 273.15;
    case temp_scale::Fahrenheit:
      return 1.8 * temp - 459.67;
    case temp_scale::Rankine:
      return 1.8 * temp;
  }
}
