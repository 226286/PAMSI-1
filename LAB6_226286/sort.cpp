#include 'list.hh'
#include<iostream>

using namespace std;

class heapsort:list
{
    list tab;

    public:
        heapsort();
        void heapify();
        void Kopiec();
        void Sort();
}
