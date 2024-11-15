#include "temperature_list.h"
#include "temperature.h"
#include <iostream>

temperature_list::~temperature_list() {
  for(Node* tempNode{firstNode->next}; tempNode!=nullptr; tempNode=tempNode->next){
    std::cout << firstNode->data.value() << " deleted" << std::endl;
    delete firstNode;
    firstNode=tempNode;
  }
}

Node* temperature_list::getFirstNode() {
  return firstNode;
};
void temperature_list::add(const temperature& temp) {
  firstNode = new Node(temp, firstNode);
};

Node::Node(temperature data, Node* next) : 
  next(next),
  data(data)
{
};

void display_temperature_list(temperature_list& list) {
  for (Node* pNode{ list.getFirstNode() }; pNode != nullptr; pNode = pNode->next) {
    const std::time_t time{ pNode->data.time_stamp() };
    const std::tm* locTime{ std::localtime(&time) };
    std::cout << locTime->tm_hour << ":" << locTime->tm_min << ":" << locTime->tm_sec << " - " << pNode->data.value() << " Kelvin" << std::endl;
  }
}
