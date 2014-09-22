#include "node.cpp"

Node* find_recursive(Node *head, int searchValue)
{
  if(head == 0)
  {
    // reached till end of list without finding
    return 0;
  }
  else if(head->value == searchValue)
  {
    // found so return the pointer
    return head;
  }
  else
  {
    // recursively call find_recursive on next node
    return find_recursive(head->next, searchValue);
  }
}
