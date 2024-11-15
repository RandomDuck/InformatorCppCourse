#ifndef pressure_h__
#define pressure_h__

#include "measurement.h"
#include <ctime>

// Class pressure, derived class specific for measured pressure.
// Converts into Pascal
class pressure : public measurement
{
  // no extended data members
public:
  explicit pressure(unsigned long);
  double value() const override;
  static constexpr unsigned long ABSOLUTE_ZERO{ 89UL };
};

#endif
