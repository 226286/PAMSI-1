#ifndef ITimeCounter_HH
#define ITimeCounter_HH


class ITimeCounter
{
	public:
		virtual void startClock() = 0;
		virtual void stopClock() = 0;
		virtual long getElapsedTime() = 0;	
		virtual void printElapsedTime() = 0;
};

#endif
