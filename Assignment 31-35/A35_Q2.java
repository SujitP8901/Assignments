//	Write a program which 2 strings from user and check whether contents of two strings are equal or not.
//	Input : "Marvellous Infosystems"
//			"Marvellous Infosystems"
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
	public boolean StrCmpX()
	{
		boolean bFlag = true;
		int iCnt = 0;
		char Arr[] = src.toCharArray();
		char Brr[] = dest.toCharArray();

		if(Arr.length != Brr.length)
		{
			bFlag = false;
		}

		for(iCnt = 0; iCnt < Arr.length; iCnt++)
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

class A35_Q2
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		boolean bRet = false;

		StringDemo sdobj = new StringDemo();

		sdobj.Accept();

		bRet = sdobj.StrCmpX();

		if(bRet == true)
		{
			System.out.println("Equal String");
		}
		else
		{
			System.out.println("Non-Equal String");
		}
	}
}
