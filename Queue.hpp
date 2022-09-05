#pragma once
#include "List.hpp"

class Queue {
  private:
  List *list;

  public:
  Queue() {
    list = new List();
  }
  ~Queue() {
    delete list;
  }

  void enqueue(int value) {
    list->insert(value, false);
  }

  int dequeue() {
    Node *node = list->getFirst();
    if(!node) return -1;
    int value = node->value;
    list->remove(node);
    return value;
  }

  void print(){
    list->print();
  }
};