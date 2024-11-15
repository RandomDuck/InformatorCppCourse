// measurement.cpp

#include "measurement.h"

measurement::measurement(unsigned long data)
: data{data}, time{std::time(nullptr)}
{ 
}

unsigned long measurement::raw_value() const
{
  return data;
}

double measurement::value() const
{
  // Must return something
  return 0.0; // Bad design, will be improved
}

std::time_t measurement::time_stamp() const
{
  return time;
}
