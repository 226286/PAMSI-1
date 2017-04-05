#include <iostream>
#include <time.h>
#include <sys/time.h>
#include <ctime>
#include <cstdlib>
#include "../inc/itimecounter.hh"

using namespace std;


void ITimeCounter::startClock()
{
	struct timeval timeofday;
	
	gettimeofday(&timeofday, NULL);
	
	long realtime = timeofday.tv_usec;
	
	realtime /= 1000; // Convert from micro seconds (10^-6) to milliseconds (10^-3)
	realtime += (timeofday.tv_sec * 1000); // Adds the seconds (10^0) after converting them to milliseconds (10^-3)

	start=realtime;
}

void ITimeCounter::stopClock()
{
	struct timeval timeofday;

	gettimeofday(&timeofday, NULL);

	long realtime = timeofday.tv_usec;
	
	realtime /= 1000; // Convert from micro seconds (10^-6) to milliseconds (10^-3)
	realtime += (timeofday.tv_sec * 1000); // Adds the seconds (10^0) after converting them to milliseconds (10^-3)

	stop=realtime;
}

long ITimeCounter::getElapsedTime()
{
	return (stop-start);
}

void ITimeCounter::printElapsedTime()
{
	cout<<endl<<"czas [s]: "<<getElapsedTime()/1000.0<<endl;
}
