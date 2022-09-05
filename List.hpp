#pragma once
#include <iostream>

class Node {
  public:
  int value;
  Node* next;

  Node(int value) {
    this->next = nullptr;
    this->value = value;
  }

  void operator+(Node* node) {
    if(!this->next)
      this->next = node;
  }
};

class List {
  private:
  int size = 0;
  Node* first = nullptr;
  Node* last = nullptr;

  Node* createNode(int value) {
    return new Node(value);
  }

  public:
  List() {}

  Node* getFirst() {return first;}
  Node* getLast() {return last;}
  
  void insert(int value, bool atStart) {
    Node* node = createNode(value);

    if(size==0) {
      first = last = node;
    } else {
      if(atStart) {
        node->next = first;
        first = node;
      } else {
        last->next = node;
        last = node;
      }
    }
    size++;
  }

  void insert(int value) {
    insert(value, false);
  }

  void remove(Node* nodeToRemove) {
    if(!nodeToRemove) return;

    Node* prevNode = nullptr;
    Node* node = first;

    if(nodeToRemove != node) {
      while(node->next && !prevNode) {
        if(node->next == nodeToRemove) {
          prevNode = node;
        }
        node = node->next;
      }

      if(nodeToRemove->next) {
        prevNode->next = nodeToRemove->next;
      } else {
        prevNode->next=nullptr;
        last = prevNode;
      }
    } else {
      if(nodeToRemove->next) {
        first = nodeToRemove->next;
      } else {
        first = last = nullptr;
      }
    }

    delete nodeToRemove;
  }

  Node* search(int value) {
    Node *node = first;
    while(node) {
      if(node->value == value) return node;
      node = node->next;
    }
  }

  void print() {
    Node *node = first;
    while(node) {
      std::cout << node->value << " ";
      node = node->next;
    }
    std::cout << std::endl;
  }
};