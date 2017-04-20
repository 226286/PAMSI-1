#ifndef List_HH
#define List_HH

#include "ilist.hh"
#include "irunnable.hh"

class List: IList, IRunnable
{
protected:
	virtual void prepare();
	virtual void run();
public:
	List();
	~List();
	virtual void Add(int element);
	virtual int Find(int *element);
	virtual void* Get(int element);
	virtual int Size();
	virtual void Next();
	virtual void Prev();
};


#endif
