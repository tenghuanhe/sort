#include <stdio.h>
#include <stdlib.h>

void bubblesort(int a[], int n);

int main()
{
	int i;
	int a[10] = {5, 6, 3, 2, 8, 10, 4, 1, 9, 7};

	for (i = 0; i < 10; i++)
		printf("%d\t", a[i]);
	printf("\n");

	bubblesort(a, 10);

	for (i = 0; i < 10; i++)
		printf("%d\t", a[i]);
	printf("\n");

	return 0;
}

void bubblesort(int a[], int n)
{
	int i, j, k, tp, flag;

	for (i = 0; i < n; i++)
	{
		flag = 0;

		for (j = 1; j < n - i; j++)
		{
			if (a[j] < a[j - 1])
			{
				tp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = tp;

				flag = 1;
			}
		}

		if (0 == flag)
			break;
	}
}
