#include <iostream>
#include <iomanip>
#include <cassert>

class temperature {
private:
unsigned long data{};
std::time_t time{std::time(nullptr)};
public:
temperature(unsigned long temp) {
  // assert(temp > 565);
  if (temp < 566) throw "Temp must be above 565";
  data = temp;
}
unsigned long raw_value() {
  return data;
}
double value() {
  return (data-566) / 135.0;
}
std::time_t time_stamp() {
  return time;
}

};


int main() {
  try {
    for (unsigned long raw{566}; raw < 1000000001UL; raw += 1350000) {
      temperature t{raw};
      std::cout << std::setprecision(10) << t.value() << " Kelvin at " << t.time_stamp() << " seconds after epoch" << std::endl;
    }
    // expected: temperatures from 0 to 7407000 Kelvin

    temperature t{565};  // not valid
    std::cout << t.value() << std::endl;  // expected: undefined
  } catch (const char* e) {
    std::cout << "Error: " << e << std::endl;
  }
}
