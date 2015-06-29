#include <cs50.h>
#include "stdio.h"

// Prototypes
int GetPositiveInt();

// Global variables
//string S;

int main(void)
{
	printf("Please enter your name: "); //\n");
	string S = GetString();
	//printf("You have a %s credit card.", CC_BRAND);
	printf("Hello %s, Please enter your credit card number: ", S);
	long long CC_NUM = GetPositiveInt();
	printf("Your credit card number: %lli\n", CC_NUM);
}

int GetPositiveInt(long long CC_NUM)
{
	//long long CC_NUM;
	//string S;
	do
	{
		CC_NUM = GetLongLong();
	}
	while (CC_NUM <= 19 && CC_NUM >= 13);
	return CC_NUM;
}