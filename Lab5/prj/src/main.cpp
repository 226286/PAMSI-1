#include <iostream>
#include <cstring>
#include <time.h>
#include <sys/time.h>
#include <ctime>
#include "../inc/dynamicarray.hh"
#include "../inc/quicksort.hh"
using namespace std;


int main()
{
	int tablica[] = {5, 4, 2, 1, 3};
	int n = sizeof(tablica)/sizeof(int);
	quicksort(tablica, 0, n-1);
	for (int i=0; i<n; i++)
	{
		cout<<tablica[i]<<" ";
	}
	cout<<endl;
	return 0;
}
