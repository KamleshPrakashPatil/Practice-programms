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
		bool bFlag=true;

		if(iNo<0)
		{
			iNo=(-iNo);
		}
		for(iCnt=2; iCnt<=(iNo/2); iCnt++)
		{
			if((iNo%iCnt)==0)
			{
				bFlag=false;
				break;
			}
		}
		return bFlag;
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
		cout<<iValue<<" is not a prime number\n";
	}

	return 0;
}