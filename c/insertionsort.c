#include <stdio.h>
#include <stdlib.h>

void insertionsort(int a[], int n);

int main()
{
	int i;
	int a[10] = {5, 6, 3, 2, 8, 10, 4, 1, 9, 7};

	for (i = 0; i < 10; i++)
		printf("%d\t", a[i]);
	printf("\n");

	insertionsort(a, 10);

	for (i = 0; i < 10; i++)
		printf("%d\t", a[i]);
	printf("\n");

	return 0;
}

void insertionsort(int a[], int n)
{
	int i, j, p, x;

	for (i = 1; i < n; i++)
	{
		x = a[i];
		j = i;

		while (j > 0 && a[j - 1] > x)
		{
			a[j] = a[j - 1];
			j--;
		}
			
		a[j] = x;
	}
}
