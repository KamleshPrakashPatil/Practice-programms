//Input: 2    4
//Output: 16
#include<stdio.h>


typedef unsigned long int ULONG;

ULONG Power(int iNo1,int iNo2)
{
	register int iCnt=0;
	ULONG iMult=0;
	iMult=1;
	
	for(iCnt=1;iCnt<=iNo2;iCnt++)
	{
		iMult=iMult*iNo1;
	}
	return iMult;
}

int main()
{
	int iValue1=0,iValue2=0;
	ULONG lRet=0;
	
	printf("Enter base: ");
	scanf("%d",&iValue1);
	
	printf("Enter power: ");
	scanf("%d",&iValue2);	
	
	lRet=Power(iValue1,iValue2);
	printf("Result is: %ld\n",lRet);	//ld=long decimal

	return 0;
}