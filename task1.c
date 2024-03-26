// #include <stdio.h>

// void sort_array(int size, int a[]);

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
// 	sort_array(20, ar);
// 	PrintArray(ar, 20);
// 	return 0;
// }

void sort_array(int size, int a[])
{
	int i;
	int tmp;
	int flag;

	do
	{
		flag = 0;
		for (i = 1; i < size; i++)
		{
			if (a[i] < a[i - 1])
			{
				tmp = a[i];
				a[i] = a[i - 1];
				a[i - 1] = tmp;
				flag = 1;
			}
		}
	} while (flag);
}
