#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[],int iLength)
{
	int iCnt=0;
	int iSum=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		iSum=iSum+Arr[iCnt];
	}
	return iSum;
}

int main()
{
	int iSize=0,iCnt=0;
	int *ptr=NULL;
	int iRet=0;

	printf("Enter no of elements: \n");
	scanf("%d",&iSize);

	ptr=(int*)malloc(iSize*sizeof(int));

	printf("Enter the values of array: \n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	iRet=Addition(ptr,iSize);
	printf("Addition is: %d\n",iRet);
	free(ptr);
	return 0;
}