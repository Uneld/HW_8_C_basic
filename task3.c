// #include <stdio.h>

// int find_max_array(int size, int a[]);

// int main()
// {
//     int ar[] = {20, 19, 4, 3, 2, 1, 18, 17, 13, 12, 11, 16, 15, 14, 10, 9, 8, 7, 6, 5};
//     printf("max = %d ", find_max_array(20, ar));

//     return 0;
// }

int find_max_array(int size, int a[])
{
    int max = a[0];
    for (int i = 1; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
