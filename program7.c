#include<stdio.h>

int Addition(int, int);  //forward declaration of th function
//////////////////////////////////////////////////////
//write a program to perform addition of 2 numbers
/////////////////////////////////////////////////////
int main()
{
	int iNo1=0;
	int iNo2=0;
	int iNo3=0;

	printf("enter first number\n");
	scanf("%d",&iNo1);
	printf("enter second number\n");
	scanf("%d",&iNo2);	
	iNo3=Addition(iNo1,iNo2);

	printf("addition is %d\n",iNo3);
	return 0;
}

////////////////////////////////////////////////////
//
//Input: 	11     10
//Output:	21
//
///////////////////////////////////////////////////