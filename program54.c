#include<stdio.h>
#include<stdbool.h>

//Program check the pallindrome number
//Input: 721
//Output: 127

bool CheckPallindrome(int iNo)
{
	int iDigit=0;
	int iTemp=0;
	int iRev=0;

	if(iNo<0)
	{
		iNo=(-iNo);
	}
	iTemp=iNo;
	while(iNo>0)
	{
		iDigit=iNo%10;
		iRev=iRev*10+iDigit;
		iNo=iNo/10;
	}
	if(iTemp==iRev)
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
	bool bRet=false;
	printf("Enter Number: ");
	scanf("%d",&iValue);

	bRet=CheckPallindrome(iValue);

	if(bRet==true)
	{
		printf("%d is pallindrome Number\n",iValue);
	}
	else
	{
		printf("%d is not palindrome Number\n",iValue);
	}
	return 0;
}
