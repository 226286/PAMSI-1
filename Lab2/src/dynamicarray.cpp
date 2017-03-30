#include "../inc/dynamicarray.hh"
#include <iostream>
using namespace std;

const int increment = 10;

DynamicArray::DynamicArray(int sz, int initialquantity)
{
	size = sz;
	quantity = 0;
	next = 0;
	storage = 0;
	EnlargeAnArray(initialquantity);
}

int DynamicArray::AddNewElement(void* element)
{
	if(next >= quantity)
	{
		EnlargeAnArray(increment);
	}
	int startbytes = next * size;
	unsigned char* newelement = (unsigned char*)element;
	for(int i = 0; i < size; i++)
	{
		storage[startbytes + i] = newelement[i];
	}
	next++;
	return(next - 1);
}

void* DynamicArray::GetAnElement(int index)
{
	if(index >= next)
	{
		return 0;
	}
	else
	{
		return &(storage[index * size]);
	}
}

int DynamicArray::NumberOfElements()
{
	return next;
}

void DynamicArray::EnlargeAnArray(int increase)
{
	int newquantity = quantity + increase;
	int newbytes = newquantity * size;
	int oldbytes = quantity * size;
	unsigned char* newstorage = new unsigned char[newbytes];
	for(int i = 0; i < oldbytes; i++)
	{
		newstorage[i] = storage[i];
	}
	delete []storage;
	storage = newstorage;
	quantity = newquantity;
}

void DynamicArray::Print()
{
	for(int i = 0; i < NumberOfElements(); i++)
	{
		cout << *(int*)GetAnElement(i) << endl;
    }
}

DynamicArray::~DynamicArray()
{
	if(storage != 0)
	{
		delete []storage;
	}
}
