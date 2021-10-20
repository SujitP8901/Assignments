//	Write a program which 2 strings from user and check whether first N contents of two strings are equal or not.
//	Note : If third parameter is greater than the size of second string 
//	then concat whole string after first string.
//	Input : "Marvellous Infosystems"
//			"Marvellous Logic Building"
//			10
//	Output : TRUE
import java.util.*;

class StringDemo
{
	public boolean StrNCmpX(String src, String dest, int iNo)
	{
		boolean bFlag = true;
		int iCnt = 0;
		char Arr[] = src.toCharArray();
		char Brr[] = dest.toCharArray();

		for(iCnt = 0; iCnt < iNo; iCnt++)
		{
			if(Arr[iCnt] != Brr[iCnt])
			{
				bFlag = false;
				break;
			}
		}

		return bFlag;
	}
}

class A35_Q3
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		String str1, str2;
		int iValue = 0;

		System.out.println("Enter First String : ");
		str1 = sobj.nextLine();

		System.out.println("Enter Second String : ");
		str2 = sobj.nextLine();

		System.out.println("Enter Number : ");
		iValue = sobj.nextInt();

		StringDemo sdobj = new StringDemo();

		boolean bRet = sdobj.StrNCmpX(str1, str2, iValue);

		if(bRet == true)
		{
			System.out.println("Equal");
		}
		else
		{
			System.out.println("Not Equal");
		}
	}
}