#include <stdio.h>
#include<stdbool.h>

int CountFactor(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=(-iNo);
	}
	int iFactCount=0;
	for (iCnt=2; iCnt<=iNo/2; iCnt++)
	{
		if(iNo%iCnt==0)
		{
			iFactCount++;
		}
}
	return iFactCount;
} 

bool CheckPrime(int iNo)
{
	int iRet=0;

	iRet=CountFactor(iNo);
	if(iRet==0)
	{
		return true;
	}
	else
	{
		return false;
	}

}

int main()
{
	int iValue=0;
	bool iRet=false;
	printf("Enter number: ");
	scanf("%d",&iValue);

	iRet=CheckPrime(iValue);
	if(iRet==true)
	{
		printf("%d is prime number\n",iValue);
	}
	else
	{
		printf("%d is not a prime number\n",iValue);
	}
	return 0;
}
