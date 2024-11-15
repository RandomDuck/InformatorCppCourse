// measurement.h

#ifndef measurement_h__
#define measurement_h__

#include <ctime>

// Class measurement for storing and converting measured of a value into some
// scale, and storing the time of the measurement
// Now an abstract base class
class measurement
{
public:
  // A base class with any virtual method shall have a virtual destructor
  virtual ~measurement() {}

  unsigned long raw_value() const;
  // Measure converted into some specific scale determined by the derived class
  // Hence, an abstract method, aka pure virtual method
  virtual double value() const = 0;

  std::time_t time_stamp() const;

protected:
  // Make constructor protected since it will/must only be invoked by the derived class
  explicit measurement(unsigned long);

private:
  unsigned long   data; // raw measurement value
  std::time_t     time; // seconds since epoch
};

// Overloaded measurement operators:
bool    operator==(const measurement& lh, const measurement& rh);
bool    operator!=(const measurement& lh, const measurement& rh);
bool    operator <(const measurement& lh, const measurement& rh);
bool    operator >(const measurement& lh, const measurement& rh);
bool    operator<=(const measurement& lh, const measurement& rh);
bool    operator>=(const measurement& lh, const measurement& rh);
double  operator -(const measurement& lh, const measurement& rh);

#endif
