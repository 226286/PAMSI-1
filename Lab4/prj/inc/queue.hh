#ifndef Queue_HH
#define Queue_HH

#include "iqueue.hh"
#include "irunnable.hh"


class Queue : IQueue, IRunnable
{
protected:
	virtual void prepare();
	virtual void run();
public:
	Queue();
	~Queue();
	virtual void Add(int element);
	virtual int Find(int *element);
	virtual void* Get(int element);
	virtual int Size();
	virtual void End();
	virtual void Push();
	virtual void Pop();
};


#endif
