//	Write a program which 2 strings from user and check whether contents of two strings are equal or not.
//	Input : "Marvellous Infosystems"
//			"Marvellous Infosystems"
//	Output : TRUE
import java.util.*;

class StringDemo
{
	public boolean StrCmpX(String src, String dest)
	{
		boolean bFlag = false;

		bFlag = src.equals(dest);

		return bFlag;

		
	}
}

class A35_Q2
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		String str1, str2;
		boolean bRet = false;

		System.out.println("Enter First String : ");
		str1 = sobj.nextLine();

		System.out.println("Enter Second String : ");
		str2 = sobj.nextLine();

		StringDemo sdobj = new StringDemo();
		bRet = sdobj.StrCmpX(str1, str2);

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
