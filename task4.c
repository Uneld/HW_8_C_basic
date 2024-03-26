// #include <stdio.h>

// int is_two_same(int size, int a[]);

// int main()
// {
//     int ar[] = {20, 20, 4, 3, 2, 1, 18, 17, 13, 12, 11, 16, 15, 14, 10, 9, 8, 7, 6, 5};
//     printf("two_same = %d ", is_two_same(20, ar));

//     return 0;
// }

int is_two_same(int size, int a[])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                return 1;
            }
        }
    }
    return 0;
}
