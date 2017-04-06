#ifndef Quicksort_HH
#define Quicksort_HH

int partition(int& array, int p, int r)
{
	int x = array[p];
	int i=0, j=0;
	for (i = p; array[i] >= x; i++){}
	for (j = r; array[j] <= x; j--){}
	if(i < j)
		{
			int tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
		}
	else
		{
			return j;
		}
}




void quicksort(int& array, int p, int r)
{
	if(p < r)
	{
		int q = partition(array, p, r);
		quicksort(array, p, q);
		quicksort(array, q+1, r);
	}
}

#endif
