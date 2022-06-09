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
	Number nobj;

	int iRet=0;

	//cout<<nobj.iNo;

	nobj.Accept();
	nobj.Display();

	iRet=nobj.Factorial();

	cout<<"Factorialis: "<<iRet<<endl;

	return 0;
}