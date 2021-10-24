//	Write a Java program which accept string from user and count number of capital characters.
//	Input : "Marvellous Multi OS"
//	Output : 4

import java.util.*;

class StringX
{
	public String str;

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter String : ");
		str = sobj.nextLine();
	}
}

class StringDemo extends StringX
{
	public int CountCapital()
	{
		char Arr[] = str.toCharArray();
		int iCnt = 0, i = 0;

		for(i = 0; i < Arr.length; i++)
		{
			if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
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

		int iRet = 0;

		StringDemo sdobj = new StringDemo();

		sdobj.Accept();

		iRet = sdobj.CountCapital();

		System.out.println("Count of Capital Characters is : " + iRet);

	}
}