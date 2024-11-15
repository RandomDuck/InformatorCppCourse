// temperature_list.h

#ifndef _temperature_list_
#define _temperature_list_
#include "temperature.h"
#include "temperature.h"

// Helper type for nodes of a linked list
class node
{
public:
  node(const temperature& t, node* p);
  temperature temp;
  node* next;
};

// Collection of temperature objects in a linked list
class temperature_list
{
public:
  temperature_list();
  ~temperature_list();

  node* first_node();
  void add(const temperature& t);

  // disable copy constructor and assignment, as a temporary solution
  temperature_list(const temperature_list&) = delete;
  temperature_list& operator=(const temperature_list&) = delete;

private:
  node* first; // points at the first node of the list, private
};

// Utility function to display a temperature_list in console
void display_temperature_list(temperature_list&); // argument cannot be const -
                                                  // explained later

#endif

