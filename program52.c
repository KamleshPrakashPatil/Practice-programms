#include<stdio.h>
//Program to display even digits in that number
//Input: 7212
//Output: 4

int SumEvenDigits(int iNo)
{
	int iDigit=0;
	int iSum=0;
	if(iNo<0)
	{
		iNo=(-iNo);
	}

	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit%2==0)
		{
			iSum=iSum+iDigit;
		}
		iNo=iNo/10;
	}
	return iSum;	
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter Number: ");
	scanf("%d",&iValue);

    iRet=SumEvenDigits(iValue);
    printf("Summation of even number is: %d\n",iRet);
	return 0;
}
//Time complexity= O(N)
//N=number of digits of given number