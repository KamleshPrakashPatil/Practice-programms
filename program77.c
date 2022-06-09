#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	bool bFlag=false;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			bFlag=true;
			break;
		}
	}
	return bFlag;
}

int main()
{
	int iSize=0,iCnt=0,iValue=0;
	int *ptr=NULL;
	bool bRet=false;

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
	
	bRet=Search(ptr,iSize,iValue);
	
	if(bRet==true)
	{
		printf("Element is there in array\n");
	}
	else
	{
		printf("Elementis not there\n");
	}
	free(ptr);
	return 0;
}