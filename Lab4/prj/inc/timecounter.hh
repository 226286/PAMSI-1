#ifndef TimeCounter_HH
#define TimeCounter_HH

#include "itimecounter.hh"

class TimeCounter: ITimeCounter
{
	private:
		long start;
		long stop;
	public:
		virtual void startClock();
		virtual void stopClock();
		virtual long getElapsedTime();	
		virtual void printElapsedTime();
};

#endif
