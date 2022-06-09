#include<iostream>
using namespace std;

int Factorial(int iNo)
{
	int iFact=1,iCnt=0;

	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		iFact*=iCnt;	//iFact=iFact*iCnt;
	}
	return iFact;
}

int main()
{
	int iValue=0;
	int iRet=0;

	cout<<"Enter Numbe: \n";
	cin>>iValue;

	iRet=Factorial(iValue);

	cout<<"Factorialis: "<<iRet<<endl;

	return 0;
}