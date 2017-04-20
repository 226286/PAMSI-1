#ifndef DynamicArray_HH
#define DynamicArray_HH

#include "irunnable.hh"

class DynamicArray: IRunnable
{
private:
	int size;					// Size of each space
    int quantity;				// Number of storage spaces
    int next;					// Next empty space
    unsigned char* storage;		// Dynamically allocated array of bytes
    void EnlargeAnArray(int increase);
public:
    DynamicArray(int size, int initialquantity = 0);
    ~DynamicArray();
    int AddNewElement(void* element);
    int AddNewElement(void* element, int increment);
    void* GetAnElement(int index);
    int NumberOfElements();
	void Print();
	virtual void run();
};



#endif
