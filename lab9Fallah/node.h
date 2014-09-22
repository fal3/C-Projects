#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Node
{
public:
    Node(void); //default constructor
    Node(int d, Node* n);//initializing constructor
    ~Node(void);
private:
    int data;
    Node* next;

public:
    int getData(void);
    Node* getNext(void);
    void set_next(Node* ptr);
};

