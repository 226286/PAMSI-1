#ifndef TimeCounter_HH
#define TimeCounter_HH


class TimeCounter
{
	private:
		//clock_t start;
		//clock_t stop;
		long start;
		long stop;
	public:
		void startClock();
		void stopClock();
		long getElapsedTime();	
		void printElapsedTime();
};

#endif
