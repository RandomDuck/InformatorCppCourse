#include "measurement.h"

class pressure : public measurement
{
public:
  explicit pressure(unsigned long);
  double value() const;
  static constexpr unsigned long ABSOLUTE_ZERO{ 89UL };
};
