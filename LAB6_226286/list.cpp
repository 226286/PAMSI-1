#include "../inc/list.hh"

using namespace std;


void List::prepare(){
}

void List::run(){
}


List::List(){
    First = nullptr;    //ctor
    Size = 0;
}

List::~List(){
}


void List::Add(int index, int element){
    if(index==0)
        {
            Node *NewNode = new Node;
            NewNode->element = element;
            NewNode->Next = First;
            First = NewNode;
            ++Size;
        }
        else if(index==Size)
        {
            Node *Temp = First;
            while(Temp->Next)
            {
                Temp = Temp->Next;
            }
            Node *NewNode = new Node;
            NewNode->element = element;
            Temp->Next = NewNode;
            ++Size;
        }
        else if(index>0 && index<Size)
        {
            Node *Temp = First;
            Node *TempBefore = nullptr;
            while(index)
            {
                --index;
                TempBefore = Temp;
                Temp = Temp->Next;
            }
            Node *NewNode = new Node;
            NewNode->element = element;
            TempBefore->Next = NewNode;
            NewNode->Next = Temp;
            ++Size;
        }
}

int List::Find(int element){
    if(!First)
    {
        std::cout<<'Nie istnieje/n';
    }
    else
    {
        Node *Temp = First;
        while(Temp->Next)
        {
            if(Temp->element == element) return element;
            Temp = Temp->Next;
        }
        std::cout<<'Nie istnieje/n';
    }
	return 0;
}

void List::Get(int index){
    if(!First)
    {
        return 0;
    }
    else
    {
        Node *Temp = First;
        for((int i=0; i<index; ++i )
        {
            if(Temp->element == element) return element;
            Temp = Temp->Next;
            ++index;
        }
    }
	return 0;
}

int List::Size(){
	return Size;
}


int List::Next(){
}

int List::Prev(){
}
