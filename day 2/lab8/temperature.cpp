#include "temp.hpp"
#include <iostream>
#include <cassert>

using temp::temperature;

temperature::temperature(unsigned long temp) {
  // assert(temp > 565);
  time = std::time(nullptr);
  if (temp < 566) throw "Temp must be above 565 but was " + std::to_string(temp);
  data = temp;
}

unsigned long temperature::raw_value() {
  return data;
}

double temperature::value() {
  return (data-566) / 135.0;
}

std::time_t temperature::time_stamp() {
  return time;
}
