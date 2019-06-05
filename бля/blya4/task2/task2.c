#include <stdio.h>
#include <math.h>

void writeArray(int* arr, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}

void main()
{
	const int n = 6;
	int a[] = { 1,2,3,4,5,6 };
	writeArray(a, n);
	printf("\n");

	system("pause");
	return 0;
}