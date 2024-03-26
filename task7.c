#include <stdio.h>

int main()
{
	char letter;
	int number;

	printf("Enter the coordinate of the cell on the chessboard (letter and number without space): ");
	scanf("%c%d", &letter, &number);

	if ((letter - 'A' + 1 + number) % 2 == 0)
	{
		printf("BLACK");
	}
	else
	{
		printf("WHITE");
	}

	printf("\n");

	return 0;
}
