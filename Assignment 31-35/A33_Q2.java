//	Write a program which accept number from user and return the count of odd digits.
//	Input : 2395 
//	Output : 3
//	Input : 1018
//	Output : 2
//	Input : -1018
//	Output : 2
//	Input : 8462
//	Output : 0

import java.util.*;

class Digit 
{
	public int CountOdd(int iNo)
	{
		if(iNo < 0)
		{
			iNo = -iNo;
		}
		int iDigit = 0, iCnt = 0; 
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			if((iDigit % 2) != 0)
			{
				iCnt++;
			}
			iNo = iNo / 10;
		} 
		return iCnt;
	}
}

class A33_Q2
{
	public static void main(String str[])
	{
		Scanner sobj = new Scanner(System.in);
		int iRet = 0, iValue = 0;

		System.out.println("Enter Number : ");
		iValue = sobj.nextInt();

		Digit dobj = new Digit();

		iRet = dobj.CountOdd(iValue);

		System.out.println("Count of Odd Digits is : " +iRet);
	}
}