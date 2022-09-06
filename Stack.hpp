#pragma once
#include "List.hpp"

class Stack {
  private:
  List list;

  public:
  Stack() {}
  ~Stack() {}

  void push(int value) {
    list.insert(value, false);
  }

  int pop() {
    Node *node = list.getLast();
    if(!node) return -1;
    int value = node->value;
    list.remove(node);
    return value;
  }

  void print(){
    list.print();
  }
};