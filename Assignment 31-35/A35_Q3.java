//	Write a program which 2 strings from user and check whether first N contents of two strings are equal or not.
//	Note : If third parameter is greater than the size of second string 
//	then concat whole string after first string.
//	Input : "Marvellous Infosystems"
//			"Marvellous Logic Building"
//			10
//	Output : TRUE
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
	public boolean StrNCmpX(int iNo)
	{
		if(iNo > dest.length())
		{
			iNo = dest.length();
		}
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
		int iValue = 0;

		StringDemo sdobj = new StringDemo();

		sdobj.Accept();

		System.out.println("Enter Number : ");
		iValue = sobj.nextInt();

		boolean bRet = sdobj.StrNCmpX(iValue);

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