#include "Node.h"


Node::Node(void)
	: data(0)
	, next(NULL)
{
}


Node::~Node(void)
{
	if(this->next!=NULL)
		delete this->next;
	cout << "deleting Node containing" << this->data<<endl;
}


Node::Node(int d, Node * n)
{
	this->data=d;
	this->next=n;
}


Node* Node::getNext(void)
{
	return next;
}

ostream & Node::print(ostream &out){

	out << data << endl;

	if (next!=NULL)
			next ->print(out);
	return out;
}
