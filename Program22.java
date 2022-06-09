import java.lang.*;
class Function
{
	public int iNo;
	public Function(int iNo1)
	{
		iNo=iNo1;
	}
	public int Summation()
	{
		int iCnt=0;
		int iSum=0;

		if (iNo<0)
		{
			iNo= -iNo;
		}
		for(iCnt=1; iCnt<=iNo; iCnt++)
		{
			iSum=iSum+iCnt;
		}
		return iSum;
	}
}
class Program22
{
	public static void main(String a[])
	{
		int iValue = 4;
		int iRet=0;
		Function obj = new Function(iValue);
		iRet=obj.Summation();
		System.out.println(iRet);


	}
}