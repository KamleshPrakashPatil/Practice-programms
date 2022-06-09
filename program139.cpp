#include<iostream>
using namespace std;

class Number
{
	private:
		int iNo;	//charactertics
	public:
		//Behaviours

	void Accept()	//setter
	{
		cout<<"Enter the value: \n";
		cin>>this->iNo;
	} 

	void Display()	//getter
	{
		cout<<"Value is: "<<this->iNo<<endl;
	}

	int Factorial()
    {
		int iFact=1,iCnt=0;

		for(iCnt=1;iCnt<=iNo;iCnt++)
		{
			iFact*=iCnt;	//iFact=iFact*iCnt;
		}
		return iFact;
	}
};


int main()
{
	Number nobj1;
	Number nobj2;

	int iRet=0;

	//cout<<nobj.iNo;

	nobj1.Accept();
	nobj1.Display();

	iRet=nobj1.Factorial();

	nobj2.Accept();
	nobj2.Display();

	iRet=nobj2.Factorial();

	cout<<"Factorialis: "<<iRet<<endl;

	return 0;
}