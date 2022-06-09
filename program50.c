#include<stdio.h>
//Program to wrie summation number of digits in that number
//Input: 721
//Output: 10

int SumDigits(int iNo)
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
		iSum=iSum+iDigit;
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

	iRet=SumDigits(iValue);
	printf("Summation of Digits are: %d\n",iRet);

	return 0;
}
//Time complexity= O(N)
//N=number of digits of given number