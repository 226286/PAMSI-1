#ifndef TimeCounter_HH
#define TimeCounter_HH


class TimeCounter
{
	private:
		clock_t start;
		clock_t stop;
	public:
		void startClock();
		void stopClock();
		void getElapsedTime();	
};

#endif
