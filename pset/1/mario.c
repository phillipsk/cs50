#include <cs50.h>
#include "stdio.h"

// Prototypes
int GetPyramidHeight();
int BuildPyramid();
int InvalidInput();


int main(void)
{

	int USER_HEIGHT = GetPyramidHeight();
	printf("Test Height: %i\n", USER_HEIGHT);
	int BuildPyramid(int USER_HEIGHT);
}

int GetPyramidHeight(int n)
{
	//int n;
	do
	{
		printf("Height: ");
		n = GetInt();
		//int InvalidInput();
			if (n == 0)
			{
			int InvalidInput();
			return 0;
			}
			
	}
	while (n > 23 || n < 1);
	return n;
}

int BuildPyramid(int USER_INPUT)
{
	for(int i = 1; i <= USER_INPUT; i++)
		{
			printf("USER_INPUT");
		}
	//printf("");
	//for(int i = 0; i < pyramid_height; i++)
}

int InvalidInput()
{
	printf("Please enter a valid integer within the range 1 - 23");
}
