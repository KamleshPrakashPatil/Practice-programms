#include<stdio.h>
#include<stdlib.h>	//for malloc and free

void Display(int Arr[],int iLength)
{
	register int iCnt=0;

	printf("Elements of araay are: \n");

	for (iCnt=0;iCnt<iLength;iCnt++)
	{
		printf("%d\n",Arr[iCnt]);
	}
}

int main()
{
	//auto int Brr[5];	static memory allocation
	int *ptr=NULL;
	int  iSize=0;
	register int iCnt=0;

	printf("Enter the number elements: \n");
	scanf("%d",&iSize);

	ptr=(int*)malloc(iSize*sizeof(int));	//dynamic memory allocation
	printf("Enter elements\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	Display(ptr,iSize);	//Display(100);   Call by Address
	free(ptr); 
	ptr=NULL;	//to avoid dangling pointer
	return 0;
}