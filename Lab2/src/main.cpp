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
	long pomiary[10];
	ofstream file;
	
	for (int j = 0; j < 10; j++)
	{
		stoper.startClock();
		
	// zwiekszanie tablicy o 1
		for(int i = 0; i < 1000; i++)
		{
			tablicaint.AddNewElement(&i, increment);
		}

	// dwukrotne zwiekszanie tablicy
		/*
		for(int i = 0; i < 10; i++)
		{
			tablicaint.AddNewElement(&i, tablicaint.NumberOfElements());
		}
		*/
		
		stoper.stopClock();
		tablicaint.Print();
		stoper.printElapsedTime();
		pomiary[j]=stoper.getElapsedTime();
	}
	
	file.open("pomiary.csv");
	long srednia=0;
	for(int j=0; j<10; j++)
	{
		file << pomiary[j]/1000.0 << endl;
		srednia += pomiary[j];
	}
	file << srednia/1000.0/10<<endl;
	file.close();
	
    return 0;
}
