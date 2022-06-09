#include<stdio.h>
#include<stdlib.h>
//Positive and Negative
int Minimum(int Arr[],int iLength)
{
	int iCnt=0;
	int iMin=0;
	iMin=Arr[0];
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(iMin>Arr[iCnt])
		{
			iMin=Arr[iCnt];
		}
	}
	return iMin;
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

	iRet=Minimum(ptr,iSize);
	printf("Minimum Number is: %d\n",iRet);
	free(ptr);
	return 0;
}