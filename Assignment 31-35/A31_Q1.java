//	Write a Java program which accept string from user and count number of capital characters.
//	Input : "Marvellous Multi OS"
//	Output : 4

import java.util.*;

class StringDemo
{
	public int CountCapital(String str1)
	{
		int iLength = 0;
		int iCnt = 0, i = 0;
		char ch = '\u0000';
		iLength = str1.length();

		for(i = 0; i < iLength; i++)
		{
			ch = str1.charAt(i);

			if((ch >= 'A') && (ch <= 'Z'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}

class A31_Q1
{
	public static void main(String str[])
	{
		Scanner sobj = new Scanner(System.in);
		String Arr;

		int iRet = 0;

		System.out.println("Enter String : ");
		Arr = sobj.nextLine();

		StringDemo sdobj = new StringDemo();

		iRet = sdobj.CountCapital(Arr);

		System.out.println("Count of Capital Characters is : " + iRet);

	}
}