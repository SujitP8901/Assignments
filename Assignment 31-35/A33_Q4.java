//	Write a program which accept number from user and return multiplication of all digits.
//	Input : 2395 
//	Output : 270
//	Input : 1018
//	Output : 8
//	Input : 9440
//	Output : 144
//	Input : 922432
//	Output : 864

import java.util.*;

class Digit 
{
	public int CountMultiply(int iNo)
	{
		if(iNo < 0)
		{
			iNo = -iNo;
		}
		int iCnt = 0, iMul = 1, iDigit = 0; 
		while(iNo != 0)
		{
			iDigit = (iNo % 10);
			if(iDigit != 0)
			{
				iMul = iMul * iDigit;
			}
			iNo = iNo / 10;
		}
		return iMul;
	}
}

class A33_Q4  
{
	public static void main(String str[])
	{
		Scanner sobj = new Scanner(System.in);
		int iValue = 0, iRet = 0;

		System.out.println("Enter Number : ");
		iValue = sobj.nextInt();

		Digit dobj = new Digit();

		iRet = dobj.CountMultiply(iValue);

		System.out.println("Multiplication of all Digits : " +iRet);
	}
}