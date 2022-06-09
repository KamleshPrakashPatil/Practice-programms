import java.lang.*;
import java.util.*;
class Prime
{
	public int iNo;
	public Prime(int iValue)
	{
		iNo=iValue;
	}
	public boolean ChkPrime()
	{
		int iCnt=0;
		if(iNo<0)
		{
			iNo=(-iNo);
		}
		for(iCnt=2;((iNo%iCnt)==0);iCnt++)
		{
			if((iNo%iCnt)==0)
			{
				return false;
			}
		}
		return true;
	}
}
class Program43
{
	public static void main(String a[])
	{
		int iValue=0;
		boolean bRet=false;
		System.out.println("Enter Number");
		Scanner sobj=new Scanner(System.in);
		iValue=sobj.nextInt();
		
		Prime pobj=new Prime(iValue);

		bRet=pobj.ChkPrime();
		if(bRet==true)
		{
			System.out.println(iValue+" is a prime number");
		}
		else
		{
			System.out.println(iValue+" is not a prime number");
		}
	}
}