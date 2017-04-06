#ifndef ITimeCounter_HH
#define ITimeCounter_HH


class ITimeCounter
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
