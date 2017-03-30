#ifndef TimeCounter_HH
#define TimeCounter_HH


class TimeCounter
{
	private:
		long start;
		long stop;
	public:
		void startClock();
		void stopClock();
		long getElapsedTime();	
		void printElapsedTime();
};

#endif
