#ifndef List_HH
#define List_HH

#include "ilist.hh"
#include "irunnable.hh"

struct Node
{
    int element;
    Node *Next;
    Node()
    {
        element = 0;
        Next = nullptr;
    }
};

class List: IList, IRunnable
{
	Node *First;
    	int Size;
protected:
	virtual void prepare();
	virtual void run();
public:
	List();
	virtual ~List();
	void Add(int index int element);
	int Find(int element);
	void Get(int index);
	int Size();
	void Next();
	void Prev();
};


#endif
