#include "temperature.h"

class Node {
  public:
  Node(temperature data, Node* next);
  Node* next;
  temperature data;
};

class temperature_list {
  public:
  ~temperature_list();
  Node* getFirstNode();
  void add(const temperature& temp);
  private:
  Node* firstNode{};
};

void display_temperature_list(temperature_list& list);
