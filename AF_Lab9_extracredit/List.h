#pragma once
#include "Node.cpp"
#include "List.h"

class List
{
public:
    List(void);
    ~List(void);
private:
    Node* front;
public:
    void push_front(int i);
    Node* getFront(void) const;
    void pop_front(void);
    void push_back(int i);
    void pop_back(void);

};