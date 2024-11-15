#ifndef measurement_h__
#define measurement_h__

#include <ctime>

// Class measurement for storing and converting measured of a value into some
// scale, and storing the time of the measurement
class measurement
{
public:
  unsigned long raw_value() const;
  // Measurement converted into some scale. Shall be overridden in derived class
  double value() const;
  std::time_t time_stamp() const;

protected:
  // Make constructor protected to prevent instantiation of class measurement
  explicit measurement(unsigned long data);

private:
  unsigned long   data; // raw measurement value
  std::time_t     time; // seconds since epoch
};

#endif
