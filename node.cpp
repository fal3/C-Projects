#pragma once

class Node{
public:
  int value;
  Node *next;

  Node(int value)
  {
    this->value = value;
    this->next = 0;
  }

  Node(int value, Node *next)
  {
    this->value = value;
    this->next = next;
  }
};
