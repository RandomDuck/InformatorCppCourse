// temperature_list.cpp

#include "temperature_list.h"
#include <iostream>

// node constructor
node::node(const temperature& t, node* p)
: temp{ t } /* copy object */, next{ p }
{ 
}

// temperature_list constructor creating an empty list
temperature_list::temperature_list()
: first{} // i.e., nullptr
{
}

node* temperature_list::first_node()
{
  return first;
}

void temperature_list::add(const temperature& t)
{
#if 0
  // List empty?
  if (first == nullptr) { // or simply: if (!first)
    // Yes, simply add the first and only element
    first = new node{ t, nullptr /* p */ };
  }
  else {
    // No, traverse the linked list to find the last node
    node* pNode = first;
    while (pNode->next) {
      // "Jump" to next node
      pNode = pNode->next;
    }
    // Now, pNode refers to the last element, create the new node, and link to
    // it the last node
    pNode->next = new node{ t, nullptr /* p */ }; // add a new one
  }
#else
  // Or, if we can accept to add the new node the beginning of the linked list:
  first = new node{ t, first /* p */ };
#endif
}

temperature_list::~temperature_list()
{
  while (first) { // I.e., if (first != nullptr)
    node* currentNode = first;
    first = first->next; // "jump" to the next node before deleting!
    delete currentNode;
  }
}

void display_temperature_list(temperature_list& list)
// argument cannot be const, explained later
{
  for (node* pNode{ list.first_node() }; pNode != nullptr; pNode = pNode->next) {
    const std::time_t time{ pNode->temp.time_stamp() };
    // std::localtime uses a pointer to a time_t referring
    // to thread local storage (if >= c++11)
    std::tm* const tmPtr{ std::localtime(&time) };
    std::cout << tmPtr->tm_hour << ":" << tmPtr->tm_min << ":" << tmPtr->tm_sec
      << " - " << pNode->temp.value() << " Kelvin" << std::endl;
  }
}
