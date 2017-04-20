#include <iostream>
#include <cstring>
#include <time.h>
#include <sys/time.h>
#include <ctime>
#include <cstdlib>
#include "../inc/dynamicarray.hh"
#include "../inc/quicksort.hh"
using namespace std;


int main()
{
	srand( time( NULL ) );
	int tablica[] = {5, 4, 2, 1, 3};
	int n = sizeof(tablica)/sizeof(int);

	for (int i=0; i<n; i++)
	{
		cout<<tablica[i]<<" ";
	}
	cout<<endl;
	
	quicksort(tablica, 0, n-1);
	
		for (int i=0; i<n; i++)
	{
		cout<<tablica[i]<<" ";
	}
	cout<<endl;
	
	
/*
	int nr_of_elem=5;
	DynamicArray tablica(sizeof(int));
	for(int i=0; i<nr_of_elem; i++)
	{
		int x = (rand() % 10 ) + 1;
		tablica.AddNewElement(&x);
	}
	tablica.Print();
	int n = tablica.NumberOfElements();
	quicksort((int*)tablica, 0, n-1);
	tablica.Print();
	
*/
	
	
	
	return 0;
}
