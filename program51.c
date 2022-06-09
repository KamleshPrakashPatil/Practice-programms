#include<stdio.h>
//Program to display even digits in that number
//Input: 721
//Output: 2

void DisplayEvenDigits(int iNo)
{
	int iDigit=0;
	if(iNo<0)
	{
		iNo=(-iNo);
	}

	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit%2==0)
		{
			printf("%d\n",iDigit);
		}
		iNo=iNo/10;
	}	
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter Number: ");
	scanf("%d",&iValue);

    DisplayEvenDigits(iValue);

	return 0;
}
//Time complexity= O(N)
//N=number of digits of given number