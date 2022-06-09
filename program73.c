#include<stdio.h>
#include<stdlib.h>
//Positive
int Maximum(int Arr[],int iLength)
{
	int iCnt=0;
	int iMax=0;
	
	for(iCnt=1;iCnt<iLength;iCnt++)
	{
		if(iMax<Arr[iCnt])
		{
			iMax=Arr[iCnt];
		}
	}
	return iMax;
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

	iRet=Maximum(ptr,iSize);
	printf("Maximum Number is: %d\n",iRet);
	free(ptr);
	return 0;
}