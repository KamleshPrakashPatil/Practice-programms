#include <stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
	int iCnt=0;
	int iSum=0;
	if(iNo<0)
	{
		iNo=(-iNo);
	}
	for(iCnt=(iNo/2); (iCnt>=(1)&&(iSum<=iNo)); iCnt--)
	{
		if((iNo%iCnt)==0)
		{
			iSum=iSum+iCnt;
		}
	}
	
	if(iSum==iNo)
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
	bool iRet=0;
	printf("Enter number: ");
	scanf("%d",&iValue);

	iRet=CheckPerfect(iValue);
	if(iRet==true)
	{
	printf("%d is a perfect number\n",iValue);
	}
	else
	{
		printf("%d is not a perfect number\n",iValue);
	}
	return 0;
}

//Time complexity:  O(N/2)