#include<iostream>
using namespace std;
class Prime
{
	public:
		int iNo;

	Prime(int iValue)
	{
		iNo=iValue;
	}
	bool ChkPrime()
	{
		int iCnt=0;
		if(iNo<0)
		{
			iNo=(-iNo);
		}
		if(iNo==1)
		{
			return true;
		}
		for(iCnt=2; iCnt<=(iNo/2); iCnt++)
		{
			if((iNo%iCnt)==0)
			{
				return false;	//Never write return inside loop :-it increases overrates in CPU and it's hard for CPU to flush all overrates
			}
		}
		return true;
	}
};
int main()
{
	int iValue=0;
	bool bRet=false;
	cout<<"Enter Number: ";
	cin>>iValue;

	Prime pobj(iValue);
	bRet=pobj.ChkPrime();

	if(bRet==true)
	{
		cout<<iValue<<" is a prime number\n";
	}
	else
	{
		cout<<iValue<<" is not prime number\n";
	}
	return 0;
}