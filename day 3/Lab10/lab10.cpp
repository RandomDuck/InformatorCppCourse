// Lab 10

#include "temperature_list.h"
#include <iostream>

int main()
{
  temperature_list list{};

  // add some temperature objects
  for (unsigned long i{566}; i < 100000000; i += 135000)
  {
    temperature obj{i};
    list.add(obj);
  }

  display_temperature_list(list);
}
