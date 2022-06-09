#include<stdio.h>
#include<stdlib.h>
//Positive and Negative
int Frequency(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	int iCount=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			iCount++;
		}
	}
	return iCount;
}

int main()
{
	int iSize=0,iCnt=0,iValue=0;
	int *ptr=NULL;
	int iRet=0;

	printf("Enter no of elements: ");
	scanf("%d",&iSize);

	printf("Enter the element to calculate the frequency: ");
	scanf("%d",&iValue);

	ptr=(int*)malloc(iSize*sizeof(int));

	printf("Enter the values of array: \n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	printf("Enter the element to calculate the frequency: ");
	scanf("%d",&iValue);
	iRet=Frequency(ptr,iSize,iValue);
	printf("%d\n",iRet);
	free(ptr);
	return 0;
}