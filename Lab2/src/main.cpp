#include <iostream>
#include <cstring>
using namespace std;

class DynamicArray
{
	int n;
	int *table;
public:
	DynamicArray(int _n)
	{
		int i=0;
		n=_n;
		array = new int[n];
		for(i=0; i<n; i++)
		{
			array[i]=0;
		}
	}
	~DynamicArray()
	{
		delete array;
	}
	void Print()
	{
		int i=0;
		while (i<n)
		{
			cout<<array[i++]<<" ";
		}
		cout<<endl;
	}
	void AddAnElement(int a);
};

class Stoper
{
  clock_t start, stop;
public:
  void startClock()
  {
    start=clock();
  }
    void stopClock()
  {
    stop=clock();
  }
  void getElapsedTime()
  {
    cout<<endl<<"czas: "<<(int)(stop-start)<<endl;
  }
};


void DynamicArray::AddAnElement(int a)
{
	int i=0;
	while(array[i]!=0)
	{
		i++;
	}
	if(i<n)
	{
		array[i]=a;
	}
	else
	{
		int *array2 = new int [n+1];
		i=0;
		while(i<n)
		{
			array2[i] = array[i];
			i++;
		}
		array2[i]=a;
		array=array2;
		n++;
	}
}

int main()
{
DynamicArray new_arr(10);
  int el=5, i=0;

  // n=10
  clock_t start = clock();
  for(i=0; i<10; i++)
    {
      new_arr.AddAnElement(el);
    }
  //new_tab.Print();
  clock_t stop = clock();
  cout<<endl<<"czas dla n=10: "<<(int)(stop-start)<<endl;

  // n=1000
  DynamicArray new_arr2(10);
  start = clock();
  for(i=0; i<1000; i++)
    {
      new_arr2.AddAnElement(el);
    }
  stop = clock();
  cout<<endl<<"czas dla n=10^3: "<<(int)(stop-start)<<endl;

  // n=10^5
  DynamicArray new_arr3(10);
  start = clock();
  for(i=0; i<100000; i++)
    {
      new_arr3.AddAnElement(el);
    }
  stop = clock();
  cout<<endl<<"czas dla n=10^5: "<<(int)(stop-start)<<endl;

  // n=10^6
  DynamicArray new_arr4(10);
  start = clock();
  for(i=0; i<1000000; i++)
    {
      new_tab4.AddAnElement(el);
    }
  stop = clock();
  cout<<endl<<"czas dla n=10^6: "<<(int)(stop-start)<<endl;

  // n=10^9
  DynamicTable new_tab5(10);
  start = clock();
  for(i=0; i<1000000000; i++)
    {
      new_arr5.AddAnElement(el);
    }
  stop = clock();
  cout<<endl<<"czas dla n=10^9: "<<(int)(stop-start)<<endl;

  
  return 0;
}
