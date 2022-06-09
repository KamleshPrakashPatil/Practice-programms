#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int SearchFirst(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			break;
		}
	}
	if(iCnt==iLength)
	{
		return -1;
	}
	else
	{
		return iCnt;
	}
}

int main()
{
	int iSize=0,iCnt=0,iValue=0;
	int *ptr=NULL;
	int iRet=0;

	printf("Enter no of elements: ");
	scanf("%d",&iSize);

	ptr=(int*)malloc(iSize*sizeof(int));

	printf("Enter the values of array: \n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	printf("Enter the element you want to search: ");
	scanf("%d",&iValue);
	
	iRet=SearchFirst(ptr,iSize,iValue);
	
	if(iRet==-1)
	{
		printf("There is no such element in arrayy\n");
	}
	else
	{
		printf("Element is found at: %d\n",iRet);
	}
	free(ptr);
	return 0;
}