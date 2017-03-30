#ifndef DynamicArray_HH
#define DynamicArray_HH

class Stash 
{
private:
	int size;					// Size of each space
    int quantity;				// Number of storage spaces
    int next;					// Next empty space
    unsigned char* storage;		// Dynamically allocated array of bytes
    void inflate(int increase);
public:
    Stash(int size, int initQuantity = 0);
    ~Stash();
    int add(void* element);
    void* fetch(int index);
    int count();

};



/*class DynamicArray
{
	private:
		int size;      // Size of each space
		int quantity;  // Number of storage spaces
		int next;      // Next empty space
		unsigned char* storage;// Dynamically allocated array of bytes:
		
		
		void EnlargeAnArray();
		void ReturnAnElement();
		void NumberOfElements();
	public:
		DynamicArray();
		~DynamicArray();
		void AddNewElement();
		void Print();
	
};*/

#endif
