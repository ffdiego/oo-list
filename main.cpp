#include <iostream>
#include "List.hpp"
#include "Stack.hpp"
#include "Queue.hpp"


int main() {
  Node* node1 = new Node(7);
  Node* node2 = new Node(8);
  *node1 + node2;
  std::cout << "operator+ overload:\n";
  std::cout << "Node1: " << node1->value << ", Node1->next:" << node1->next->value << "\n\n";

  Stack *stack = new Stack();
  stack->push(1);
  stack->push(2);
  stack->push(3);
  stack->push(4);

  std::cout << "Teste de pilha:\n";
  stack->print();
  std::cout << "Vou dar um pop: " << stack->pop() << "\n";
  stack->print();


  Queue *queue = new Queue();
  queue->enqueue(1);
  queue->enqueue(2);
  queue->enqueue(3);
  queue->enqueue(4);

  std::cout << "\nTeste de lista:\n";
  queue->print();
  std::cout << "Vou desenfileirar um item: " << queue->dequeue() << "\n";
  queue->print();

  return 0; 
}