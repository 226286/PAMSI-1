#include <fstream>
#include <iostream>
#include <cstring>
#include <time.h>
#include <sys/time.h>
#include <ctime>
#include "../inc/dynamicarray.hh"
#include "../inc/timecounter.hh"
using namespace std;


int main() 
{
	TimeCounter stoper;
	DynamicArray tablicaint(sizeof(int));
	stoper.startClock();
    for(int i = 0; i < 100; i++)
    {
		tablicaint.AddNewElement(&i);
	}
	stoper.stopClock();
	tablicaint.Print();
	stoper.getElapsedTime();
    return 0;
}
