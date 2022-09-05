#pragma once
#include "List.hpp"

class Stack : List {
  public:
  Stack() {}

  void push(int value) {
    insert(value, false);
  }

  int pop() {
    if(!last) return 0;
    int value = last->value;
    remove(last);
  }
};