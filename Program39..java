import java.lang.*;
import java.util.*;
class Prime
{
	public int iNo;
	public Prime(int iValue)
	{
		iNo=iValue;
	} 
	public boolean ChckPrime()
	{
		int iCnt=0;
		boolean bFlag=true;
		if(iNo<0)
		{
			iNo=(-iNo);
		}
		for (iCnt=2; iCnt<=(iNo/2);iCnt++)
		{
			if((iNo%iCnt)==0)
			{
				bFlag=false;
				break;
			}
		}
		return bFlag;
	}
}
class Program39
{
	public static void main(String a[])
	{
		int iValue=0;
		boolean bRet=false;
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Number");

		iValue=sobj.nextInt();

		Prime pobj=new Prime(iValue);

		bRet=pobj.ChckPrime();

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