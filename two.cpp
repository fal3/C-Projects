#include "node.cpp"

int add_recursive(Node *head)
{
  if(head->next != 0)
  {
    return head->value + add_recursive(head->next);
  }
  else
  {
    return head->value;
  }
}
