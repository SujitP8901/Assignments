//	Write a program which accept number from user and return difference between 
//	summation of even digits and summation of odd digits.
//	Input : 2395 
//	Output : -15 (2 - 17)
//	Input : 1018
//	Output : 6 (8 - 2)
//	Input : 8440
//	Output : 16 (16 - 0)
//	Input : 5733
//	Output : -18 (0 - 18)

import java.util.*;

class Digit 
{
	public int CountDiff(int iNo)
	{
		if(iNo < 0)
		{
			iNo = -iNo;
		}
		int iCnt = 0, sEven = 0, sOdd = 0, iDigit = 0; 
		while(iNo != 0)
		{
			iDigit = (iNo % 10);
			if((iDigit % 2) == 0)
			{
				sEven = sEven + iDigit;
			}
			else
			{
				sOdd = sOdd + iDigit;
			}
			iNo = iNo / 10;
		}
		
		return (sEven - sOdd);
	}
}

class A33_Q5  
{
	public static void main(String str[])
	{
		Scanner sobj = new Scanner(System.in);
		int iValue = 0, iRet = 0;

		System.out.println("Enter Number : ");
		iValue = sobj.nextInt();

		Digit dobj = new Digit();

		iRet = dobj.CountDiff(iValue);

		System.out.println("Difference between sum of Even digits and Odd digits is : " +iRet);
	}
}