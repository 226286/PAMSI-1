#ifndef DynamicArray_HH
#define DynamicArray_HH

class DynamicArray 
{
private:
	int size;					// Size of each space
    int quantity;				// Number of storage spaces
    int next;					// Next empty space
    unsigned char* storage;		// Dynamically allocated array of bytes
    void EnlargeAnArray(int increase);
    void ReduceAnArray(int descrease);
public:
    DynamicArray(int size, int initialquantity = 0);
    ~DynamicArray();
    int AddNewElement(void* element);
    void* GetAnElement(int index);
    int NumberOfElements();
	void Print();
};



#endif
