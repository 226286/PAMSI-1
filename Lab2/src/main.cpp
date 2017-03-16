#include <iostream>
#include <cstring>
using namespace std;

class DynamicTable
{
	int n;
	int *table;
public:
	DynamicTable(int _n)
	{
		int i=0;
		n=_n;
		table = new int[n];
		for(i=0; i<n; i++)
		{
			table[i]=0;
		}
	}
	~DynamicTable()
	{
		delete table;
	}
	void Print()
	{
		int i=0;
		while (i<n)
		{
			cout<<table[i++]<<" ";
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


void DynamicTable::AddAnElement(int a)
{
	int i=0;
	while(table[i]!=0)
	{
		i++;
	}
	if(i<n)
	{
		table[i]=a;
	}
	else
	{
		int *table2 = new int [n+1];
		i=0;
		while(i<n)
		{
			table2[i] = table[i];
			i++;
		}
		table2[i]=a;
		table=table2;
		n++;
	}
}

int main()
{
DynamicTable new_tab(10);
  int el=5, i=0;

  // n=10
  clock_t start = clock();
  for(i=0; i<10; i++)
    {
      new_tab.AddAnElement(el);
    }
  //new_tab.Print();
  clock_t stop = clock();
  cout<<endl<<"czas dla n=10: "<<(int)(stop-start)<<endl;

  // n=1000
  DynamicTable new_tab2(10);
  start = clock();
  for(i=0; i<1000; i++)
    {
      new_tab2.AddAnElement(el);
    }
  stop = clock();
  cout<<endl<<"czas dla n=10^3: "<<(int)(stop-start)<<endl;

  // n=10^5
  DynamicTable new_tab3(10);
  start = clock();
  for(i=0; i<100000; i++)
    {
      new_tab3.AddAnElement(el);
    }
  stop = clock();
  cout<<endl<<"czas dla n=10^5: "<<(int)(stop-start)<<endl;

  // n=10^6
  DynamicTable new_tab4(10);
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
      new_tab5.AddAnElement(el);
    }
  stop = clock();
  cout<<endl<<"czas dla n=10^9: "<<(int)(stop-start)<<endl;

  
  return 0;
}
