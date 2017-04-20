#ifndef Stack_HH
#define Stack_HH

#include "istack.hh"
#include "irunnable.hh"


class Stack: IStack, IRunnable
{
protected:
	virtual void prepare();
	virtual void run();
public:
	Stack();
	~Stack();
	virtual void Add(int element);
	virtual int Find(int *element);
	virtual void* Get(int element);
	virtual int Size();
	virtual void Top();
	virtual void Push();
	virtual void Pop();
};



#endif
