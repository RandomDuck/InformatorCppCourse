// measurement.cpp

#include "measurement.h"

//// Base class measurement implementation
// measurement constructor storing the raw value and a time stamp
measurement::measurement(unsigned long d)
: data{ d }, time{ std::time(nullptr) }
{
}

// measurement service method raw_value() implementation
unsigned long measurement::raw_value() const
{
  return data;
}

// measurement service method time_stamp() implementation
std::time_t measurement::time_stamp() const
{
  return time;
}

// Overloaded measurement operator implementations:
// Note: the problem of possibly different actual types
// of the arguments will be dealt with later
bool operator==(const measurement& lh, const measurement& rh)
{
  return lh.raw_value() == rh.raw_value();
  // floating point values may behave surprising when compared equal
}
bool operator!=(const measurement& lh, const measurement& rh)
{
  return !(lh == rh); // In terms of operator==(...) above
}
bool operator<(const measurement& lh, const measurement& rh)
{
  return lh.value() < rh.value(); // dynamic binding, i.e., virtual method call!
}
bool operator>(const measurement& lh, const measurement& rh)
{
  return rh < lh; // In terms of operator<(...) above
}
bool operator<=(const measurement& lh, const measurement& rh)
{
  return !(rh < lh); // In terms of operator<(...) above
}
bool operator>=(const measurement& lh, const measurement& rh)
{
  return !(lh < rh); // In terms of operator<(...) above
}
double operator-(const measurement& lh, const measurement& rh)
{
  return lh.value() - rh.value(); // dynamic binding!
}
