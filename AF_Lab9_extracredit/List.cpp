#include "List.h"

List::List(void)
    : front(NULL)
{
}


List::~List(void)
{    
    cout << "Front deleted\n";
    if(front!=NULL)
        delete front;
}

void List::push_front(int i)
{

    Node* temp=new Node(i,front);
    front = temp;
}

ostream& operator<<(ostream & out, const List & list){
    //print out the values in the list separated by space
    Node* temp = list.getFront();
    while(temp!=NULL){
        out << temp->getData()<<"  "; //stream the data
        temp = temp->getNext(); //advance the temp pointer
    }
    return out;
}

Node* List::getFront(void)const
{
    return front;
}

void List::pop_front(void)
{
    //if list is not empty it removes and frees first element
    if (front!=NULL){
        Node* temp = front;
        front = front->getNext();
        temp->set_next(NULL);
        delete temp;
    }
}

void List::push_back(int i)
{
    if(front==NULL){
        front = new Node(i,NULL);
    }else{
        Node* temp = front;
        //march temp to last node
        while( temp->getNext()!=NULL ){
            temp = temp->getNext();
        }
        temp->set_next(new Node(i,NULL));
    }
}

void List::pop_back(void)
{
    if(front==NULL){
        //do nothing
    }else if(front->getNext()==NULL){
        delete front;
        front=NULL;
    }else{
        //get a pointer to the penultimate node
        Node* temp = front;
        while(  temp->getNext()->getNext() !=NULL ){
            temp = temp->getNext();
        }
        delete temp->getNext();
        temp->set_next(NULL);

    }







}