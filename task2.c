// #include <stdio.h>

// void sort_even_odd(int n, int a[]);

// void PrintArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }

// int main()
// {
//     int ar[] = {1, 0, 1, 0, 0, 0, 1};
//     sort_even_odd(7, ar);
//     PrintArray(ar, 7);
//     return 0;
// }

void sort_even_odd(int n, int a[])
{
    int temp[n];
    int evenIndex = 0;
    int oddIndex = n - 1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            temp[evenIndex++] = a[i];
        }
        else
        {
            temp[oddIndex--] = a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = temp[i];
    }
}