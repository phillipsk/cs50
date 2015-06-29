#include <cs50.h>
#include "stdio.h"

// Prototypes
int GetPyramidHeight();
int BuildPyramid();
int InvalidInput();

// Global variables
//string S;

int main(void)
{
	//printf("Please enter your name: "); //\n");
	//string S = GetString();
	//printf("You have a %s credit card.", CC_BRAND);
	//printf("Hello %s, Please enter your credit card number: ", S);
	int USER_HEIGHT = GetPyramidHeight();
	printf("Test Height: %i\n", USER_HEIGHT);
	//printf("#") * n;
}

int GetPyramidHeight(int n)
{
	//int n;
	do
	{
		printf("Height: ");
		n = GetInt();
		//int InvalidInput();
/*			if (n == 0)*/
/*			{*/
/*			int InvalidInput();*/
/*			return 0;*/
/*			}*/
			
	}
	while (n > 23 || n < 1);
	return n;
}

int BuildPyramid()
{
	for(int=1; i<= n)
}

int InvalidInput()
{
	printf("Please enter a valid integer within the range 1 - 23");
}
