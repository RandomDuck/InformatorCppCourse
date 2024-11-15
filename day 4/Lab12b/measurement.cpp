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

std::time_t measurement::time_stamp() const
{
  return time;
}
