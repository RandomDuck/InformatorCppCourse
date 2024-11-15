#include "pressure.h"

pressure::pressure(unsigned long data)
  : measurement{ data }
{
}

double pressure::value() const // converts into Pascal
{
  return (raw_value() - ABSOLUTE_ZERO) / 4.0;
}
