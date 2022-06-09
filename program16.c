//Program to Display Hello on Screen

#include<stdio.h>

//Demonstration of Iteration

void Display(int iNo)	//Defination		//service provider function
{

	int iCnt = 0;
	if(iNo<0)	//filter
	{
		printf("please enter positive number\n");
		return;
	}
	for (iCnt = 0;iCnt<iNo;iCnt++)
	{
		printf("Hello\n");    //4
	}
}
int main()
{
	int iValue=0;
	printf("No of times you want to print\n");
	scanf("%d",&iValue);
	Display(iValue);		//Function Call
	return 0;
}