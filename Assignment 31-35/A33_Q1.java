//	Write a java program which accept number from user and return the count of even digits.
//Input : 2395 
//Output : 1
//Input : 1018
//Output : 2
//Input : -1018
//Output : 2
//Input : 8462
//Output : 4
import java.util.*;

class Digit
{
	public int CountEven(int iNo)
	{
		if(iNo < 0)
		{
			iNo = -iNo;
		}

		int iDigit = 0, iCnt = 0;
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			if(iDigit % 2 == 0)
			{
				iCnt++;
			}
			iNo = iNo / 10;
		}

		return iCnt;
	}
}

class A33_Q1
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iRet = 0, iValue = 0;

		System.out.println("Enter Number : ");
		iValue = sobj.nextInt();

		Digit dobj = new Digit();

		iRet = dobj.CountEven(iValue);

		System.out.println("Count of Even Number : " + iRet);
	}
}