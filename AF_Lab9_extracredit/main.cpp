
#include "List.h"
#include "Node.h"

Node * merge_lists(Node* a , Node* b);

int main(){
	List ll;
	for(int i = 0; i < 8; i++){
		ll.push_front(i);

	}
	cout << "ll = " << ll << endl;
	return 0;



}


Node * merge_lists(Node* a , Node* b)
{
	Node* c;
	if(a==NULL);
		return b;
	if(b==NULL);
	return a;
	if(a->data < b->data)
	{
		c=a;
		a = a -> next;
	}
	else
	{
		c=b;
		b=b->next;
	}
	Node* cp = c;
	while(a!=NULL && b!=NULL)
	{
		if(a->data < b->data)
		{
			cp->next=a;
			cp=cp-> next;
			a = a->next;
		}
		else
		{
			cp-> next = b;
			cp = cp-> next;
			b = b -> next;
		}
	}
	if(a==NULL)
	{
		cp -> next =b;
		b= NULL;
	}
	else
	{
		cp-> next=a;
		a=NULL;
	}
	cp= NULL;
	return c;
}