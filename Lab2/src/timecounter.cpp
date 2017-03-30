#include<iostream>
#include<ctime>
#include<cstdlib>
#include "../inc/timecounter.hh"

using namespace std;


void TimeCounter::startClock()
{
	start=clock();
}

void TimeCounter::stopClock()
{
	stop=clock();
}

void TimeCounter::getElapsedTime()
{
	cout<<endl<<"czas: "<<(int)(stop-start)<<endl;
}
