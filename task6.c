// #include <stdio.h>

// int average_diagonal(int matrix[5][5]);

// int main()
// {
// 	int matrix[5][5] = {
// 		{1, 1, 1, 1, 1},
// 		{2, 2, 2, 2, 2},
// 		{3, 3, 3, 3, 3},
// 		{4, 4, 4, 4, 4},
// 		{5, 5, 5, 5, 5}};

// 	int result = average_diagonal(matrix);
// 	printf("average_diagonal = %d ", result);

// 	return 0;
// }

int average_diagonal(int matrix[5][5])
{
	int sum = 0;
	int count = 0;

	for (int i = 0; i < 5; i++)
	{
		sum += matrix[i][i];
		count++;
	}

	int average = sum / count;
	int positive_count = 0;

	for (int i = 0; i < 5; i++)
		for (int i = 0; i < 5; i++)
		{
			if (matrix[i][i] > average)
			{
				positive_count++;
			}
		}

	return positive_count;
}
