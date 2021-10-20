//	Write a java program which accepts 2 strings from user and concat N characters 
//of second string after first string.Value of N should be accepted from user.
//	Note : If third parameter is greater than the size of second string then concat
//whole string after first string.
//	Input : "Marvellous Infosystems"
//			"Logic Building"
//			5
//	Output : "Marvellous Infosystems Logic"

import java.util.*;

class StringDemo
{
	public String StrNCatX(String src, String dest, int iNo)
	{
		int i = 0;

		char Arr[] = dest.toCharArray();

		char Ans[];

		for(i = 0; i < iNo-1; i++)
		{
			Ans[i] = Arr[i];
		}

		return (src + new String(Ans));
	}
}

class A35_Q1
{
	public static void main(String arg []) 
	{
		Scanner sobj = new Scanner(System.in);

		int iValue = 0;
		String sRet;
		System.out.println("Enetr String 1 :");
		String str1 = sobj.nextLine();

		System.out.println("Enetr String 2 :");
		String str2 = sobj.nextLine();

		System.out.println("Enetr Number :");
		iValue = sobj.nextInt();

		StringDemo sdobj = new StringDemo();
		sRet = sdobj.StrNCatX(str1, str2, iValue);

		System.out.println("Modified String : " + sRet);
	}
}
