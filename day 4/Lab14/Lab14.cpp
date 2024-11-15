// Lab 14

#include "measurement.h"
#include <iostream>

int main()
{
	temperature t1{ 33999 };
	pressure p1{ 67890 };
	try {
		std::cout << (t1 - p1) << std::endl; // nonsense
	}
#if 1
  catch(std::invalid_argument& e) {
#else
  catch(inconsistent_types_exception& e) {
#endif
    std::cout << e.what() << std::endl;
  }
  try {
                      // Force an enum value out its range (violate type system)
    from_kelvin(3.14, static_cast<temp_scale>(42));
  }
  catch (std::out_of_range& e) {
    std::cerr << "Ooops! \"" << e.what() << '\"' << std::endl;
  }
}
