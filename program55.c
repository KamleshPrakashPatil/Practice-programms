//Input: 2    4
//Output: 16

#include<stdio.h>

int Power(int iNo1,int iNo2)
{
	register int iCnt=0;
	int iMult=0;
	iMult=1;
	if(iNo1<0||iNo2<0)
	{
		iNo1=(-iNo1);
		iNo2=(-iNo2);
	}

	for(iCnt=1;iCnt<=iNo2;iCnt++)
	{
		iMult=iMult*iNo1;
	}
	return iMult;
}

int main()
{
	int iValue1=0,iValue2=0;
	int iRet=0;
	
	printf("Enter base: ");
	scanf("%d",&iValue1);
	
	printf("Enter power: ");
	scanf("%d",&iValue2);	
	
	iRet=Power(iValue1,iValue2);
	printf("Result is: %d\n",iRet);

	return 0;
}