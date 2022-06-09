#include<stdio.h>
//Program to wrie total number of digits in that number
//Input: 7856
//Output: 4

int CountDigits(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=(-iNo);
	}

	while(iNo>0)
	{
		iCnt++;
		iNo=iNo/10;
	}
	return iCnt;
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter Number: ");
	scanf("%d",&iValue);

	iRet=CountDigits(iValue);
	printf("Number of Digits are: %d\n",iRet);

	return 0;
}
//Time complexity= O(N)
//N=number of digits of given number