#include <stdio.h>
#include <stdlib.h>

void quicksort(int a[], int lo, int hi);
int partition(int a[], int lo, int hi);

int main()
{
	int i;
	int a[10] = {5, 6, 3, 2, 8, 10, 4, 1, 9, 7};

	for (i = 0; i < 10; i++)
		printf("%d\t", a[i]);
	printf("\n");

	quicksort(a, 0, 9);

	for (i = 0; i < 10; i++)
		printf("%d\t", a[i]);
	printf("\n");

	return 0;
}

void quicksort(int a[], int lo, int hi)
{
	int p;
	if (lo < hi)
	{
		p = partition(a, lo, hi);

		quicksort(a, lo, p - 1);
		quicksort(a, p + 1, hi);
	}
}

int partition(int a[], int lo, int hi)
{
	int i, j, p, tp;

	p = a[hi];
	i = lo - 1;

	for (j = lo; j < hi; j++)
	{
		if (a[j] < p)
		{
			i = i + 1;
			tp = a[j];
			a[j] = a[i];
			a[i] = tp;
		}
	
	}

	a[hi] = a[i + 1];
	a[i + 1] = p;

	return i + 1;
}

