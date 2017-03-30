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
	Stash intStash(sizeof(int));
    for(int i = 0; i < 100; i++)
		intStash.add(&i);
	for(int j = 0; j < intStash.count(); j++)
		cout << "intStash.fetch(" << j << ") = "
             << *(int*)intStash.fetch(j)
             << endl;
    return 0;
}
