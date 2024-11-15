#include "measurement.h"

class temperature : public measurement
{
public:
  explicit temperature(unsigned long data);
  double value() const;
  static constexpr unsigned long ABSOLUTE_ZERO{ 566UL };
};

enum class temp_scale { Kelvin, Celsius, Fahrenheit, Rankine };

double from_kelvin(double, temp_scale);
