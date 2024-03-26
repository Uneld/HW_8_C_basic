// #include <stdio.h>

// void change_max_min(int size, int a[]);

// void PrintArray(int arr[], int n)
// {
// 	for (int i = 0; i < n; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// }

// int main()
// {
// 	int ar[] = {20, 19, 4, 3, 2, 1, 18, 17, 13, 12, 11, 16, 15, 14, 10, 9, 8, 7, 6, 5};
// 	change_max_min(20, ar);
// 	PrintArray(ar, 20);
// 	return 0;
// }

void change_max_min(int size, int a[])
{
	int min = a[0];
	int max = a[0];
	int minPos = 0;
	int maxPos = 0;

	for (int i = 1; i < size; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
			minPos = i;
		}
		if (a[i] > max)
		{
			max = a[i];
			maxPos = i;
		}
	}

	int temp = a[minPos];
	a[minPos] = a[maxPos];
	a[maxPos] = temp;
}