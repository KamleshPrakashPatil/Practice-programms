/////////////////////////////////////////////////////
//
//Function Name:Addition
//Description:  Used to perforn addition of 2 numbers
//Input:		integer,integer
//Output:		integer
//Date:			12/04/2022
//Author:		Kamlesh Prakash Patil
//
/////////////////////////////////////////////////////
int Addition(int iValue1,int iValue2)
{
	int iAns=0;

	if(iValue1<0)
	{
		iValue1= -iValue1;
	}
	if(iValue2<0)
	{
		iValue2= -iValue2;
	}
	iAns=iValue1+iValue2;
	return iAns;
}