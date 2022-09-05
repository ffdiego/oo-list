#include "List.hpp"
#include "Stack.hpp"

int main() {
  List list = List();
  list.insert(3);
  list.insert(4);
  list.insert(5);
  list.print();
  return 0;
}