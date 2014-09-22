#include <iostream>

#include "one.cpp"
#include "two.cpp"
#include "three.cpp"
#include "four.cpp"

using namespace std;

int main()
{
  char src[] = "Quick Brown Fox";
  char dest[40];

  // Testing recursive strlen
  cout << endl << "Length of `"<< src << "` is: " << strlen_recursive(src) << endl; // Count string length

  // Testing recursive strcpy
  strcpy_recursive(dest, src); // Copy the string
  cout << endl << "Copied string: " << dest << endl;

  // Create the linked list with three nodes
  Node *head = new Node(7, new Node(11, new Node(32)));

  // Testing recursive add
  cout << endl << "Adding using recursive method, sum is: " << add_recursive(head) << endl;

  // Testing recursive find
  Node *result;
  result = find_recursive(head, 11);
  cout << endl << "Searching 11 in the linked list: ";
  if(result)
    cout << "Found " << result->value << endl;
  else
    cout << "Not found" << endl;
  
  result = find_recursive(head, 12);
  cout << endl << "Searching 12 in the linked list: ";
  if(result)
    cout << "Found " << result->value << endl;
  else
    cout << "Not found" << endl;

  // Testing recursive pow
  cout << endl << "pow(1.5, 0): " << pow_recursive(1.5, 0);
  cout << endl << "pow(1.5, 1): " << pow_recursive(1.5, 1);
  cout << endl << "pow(1.5, 2): " << pow_recursive(1.5, 2);
}
