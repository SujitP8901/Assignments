//	Write a java program which accepts 2 strings from user and concat N characters 
//of second string after first string.Value of N should be accepted from user.
//	Note : If third parameter is greater than the size of second string then concat
//whole string after first string.
//	Input : "Marvellous Infosystems"
//			"Logic Building"
//			5
//	Output : "Marvellous Infosystems Logic"

import java.util.*;

class StringX
{
	public String src;
	public String dest;

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter String 1 :");
		src = sobj.nextLine();

		System.out.println("Enter String 2 :");
		dest = sobj.nextLine();
	}
}

class StringDemo extends StringX
{
	public String StrNCatX(int iNo)
	{
		int i = 0;

		if(iNo > dest.length())
		{
			iNo = dest.length();
		}

		char Arr[] = dest.toCharArray();

		char Ans[] = new char[iNo];

		for(i = 0; i < Ans.length; i++)
		{
			Ans[i] = Arr[i];
		}

		String newstr = new String(Ans);

		String res = src + " " + newstr;

		return res;
	}
}

class A35_Q1
{
	public static void main(String arg []) 
	{
		Scanner sobj = new Scanner(System.in);

		int iValue = 0;
		String sRet;
		
		StringDemo sdobj = new StringDemo();

		sdobj.Accept();

		System.out.println("Enter Number :");
		iValue = sobj.nextInt();

		
		sRet = sdobj.StrNCatX(iValue);

		System.out.println("Modified String : " + sRet);
	}
}
