#include<iostream>
using namespace std;
class Function
{
public:
	int iNo;
	Function(int iNo1)
	{
		iNo=iNo1;
	}
    int Summation()
    {
		int iCnt=0;
		int iSum=0;

		if(iNo<0)
		{
			iNo= -iNo;
		}
		for(iCnt=1; iCnt<=iNo; iCnt++)
		{
			iSum=iSum+iCnt;
		}
		return iSum;
	}
};
int main()
{
	int iValue=0;
	int iRet=0;
	cout<<"Enter Number: \n";
	cin>>iValue;
	Function obj(iValue);
	iRet=obj.Summation();
	cout<<"Summation is: "<<iRet<<"\n";
	
	return 0;
}