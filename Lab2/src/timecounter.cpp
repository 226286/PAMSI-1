#include <iostream>
#include <time.h>
#include <sys/time.h>
#include <ctime>
#include <cstdlib>
#include "../inc/timecounter.hh"

using namespace std;


void TimeCounter::startClock()
{
	struct timeval timeofday;
	
	gettimeofday(&timeofday, NULL);
	
	long realtime = timeofday.tv_usec;
	
	realtime /= 1000; // Convert from micro seconds (10^-6) to milliseconds (10^-3)
	realtime += (timeofday.tv_sec * 1000); // Adds the seconds (10^0) after converting them to milliseconds (10^-3)

	start=realtime;
}

void TimeCounter::stopClock()
{
	struct timeval timeofday;

	gettimeofday(&timeofday, NULL);

	long realtime = timeofday.tv_usec;
	
	realtime /= 1000; // Convert from micro seconds (10^-6) to milliseconds (10^-3)
	realtime += (timeofday.tv_sec * 1000); // Adds the seconds (10^0) after converting them to milliseconds (10^-3)

	stop=realtime;
}

long TimeCounter::getElapsedTime()
{
	return (stop-start);
}

void TimeCounter::printElapsedTime()
{
	cout<<endl<<"czas [s]: "<<getElapsedTime()/1000.0<<endl;
}
