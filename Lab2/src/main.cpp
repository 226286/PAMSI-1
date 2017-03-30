#include <fstream>
#include <iostream>
#include <cstring>
#include <time.h>
#include <sys/time.h>
#include <ctime>
#include "../inc/dynamicarray.hh"
#include "../inc/timecounter.hh"
using namespace std;

const int increment = 1;

int main() 
{
	TimeCounter stoper;
	DynamicArray tablicaint(sizeof(int));
	
	// zwiekszanie tablicy o 1
	stoper.startClock();
    for(int i = 0; i < 1000; i++)
    {
		tablicaint.AddNewElement(&i, increment);
	}
	stoper.stopClock();
	tablicaint.Print();
	stoper.getElapsedTime();
	
	// dwukrotne zwiekszanie tablicy
/*	stoper.startClock();
    for(int i = 0; i < 10; i++)
    {
		tablicaint.AddNewElement(&i, tablicaint.NumberOfElements());
	}
	stoper.stopClock();
	tablicaint.Print();
	stoper.getElapsedTime();*/
	
    return 0;
}
