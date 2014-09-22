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

//ostream & Node::print(ostream &out){
//
//	out << data << endl;
//
//	if (next!=NULL){
//			next ->print(out);
//	}
//	return out;
//}
void Insert_After(iterator iter, int val) {
    node* p = iter.ptr;
    if (p==0) { p = &head; }
    node* n = new node(val, p->next);
    p->next = n;
  }