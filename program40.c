//program to calculate total number of factors of given number
#include <stdio.h>
#include<stdbool.h>

int CountFactor(int iNo)
{
	int iCnt=0;
	int iFactCount=0;
	for (iCnt=1; iCnt<=iNo/2; iCnt++)
	{
		if(iNo%iCnt==0)
		{
			iFactCount++;
		}
}
	return iFactCount;
} 

int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter number: ");
	scanf("%d",&iValue);

	iRet=CountFactor(iValue);
	
	printf("%d are total factor\n",iRet);
	
	return 0;
}
