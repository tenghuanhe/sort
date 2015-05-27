#include <stdio.h>
#include <stdlib.h>

void selectionsort(int a[], int n);

int main()
{
	int i;
	int a[10] = {5, 6, 3, 2, 8, 10, 4, 1, 9, 7};

	for (i = 0; i < 10; i++)
		printf("%d\t", a[i]);
	printf("\n");

	selectionsort(a, 10);

	for (i = 0; i < 10; i++)
		printf("%d\t", a[i]);
	printf("\n");

	return 0;
}

void selectionsort(int a[], int n)
{
	int i, j, p, tp, min;

	for (i = 0; i < n; i++)
	{
		min = a[i];
		p = i;
		for (j = i + 1; j < n; j++)
			if (a[j] < min) 
			{
				min = a[j];
				p = j;
			}
		if (p != i)
		{
			tp = a[i];
			a[i] = a[p];
			a[p] = tp;
		}
	}
}
