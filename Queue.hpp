#pragma once
#include "List.hpp"

class Queue : List {
  public:
  Queue() {}

  void enqueue(int value) {
    insert(value, true);
  }

  int dequeue() {
    if(!last) return 0;
    int value = last->value;
    remove(last);
  }
};