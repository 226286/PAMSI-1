#ifndef DynamicArray_HH
#define DynamicArray_HH


    //: C04:CppLib.h
    // C-like library converted to C++

    struct Stash {
      int size;      // Size of each space
      int quantity;  // Number of storage spaces
      int next;      // Next empty space
       // Dynamically allocated array of bytes:
      unsigned char* storage;
      // Functions!
      void initialize(int size);
      void cleanup();
      int add(const void* element);
      void* fetch(int index);
      int count();
      void inflate(int increase);
    }; ///:~



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
