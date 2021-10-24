//	Accept string from user and check whether the string is palindrome or not without considering its case.
//	Input : "1abccBA1"
//	Output : TRUE
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
	public boolean CheckPalindrome()
	{
		boolean bFlag = true;
		char Arr[] = str.toCharArray();

		int iStart = 0, iEnd = Arr.length - 1, i = 0;
		char temp = '\u0000';
		while(iStart < iEnd)
		{
			temp = Arr[iStart];
			Arr[iStart] = Arr[iEnd];
			Arr[iEnd] = temp;
			iStart++;
			iEnd--;
		}

		// iStart = 0;
		// iEnd = Arr.length - 1;

		// while(iStart < iEnd)
		// {
		// 	if((Arr[iStart] != Arr[iEnd]))
		// 	{
		// 		bFlag = false;
		// 		break;
		// 	}
		// 	iStart++;
		// 	iEnd--;
		// }

		String newstr = new String(Arr);

		boolean bFlag = newstr.equalsIgnoreCase(str);

		return bFlag;
	}
}

class A35_Q5
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		boolean bRet = false;

		StringDemo sdobj = new StringDemo();

		sdobj.Accept();

		bRet = sdobj.CheckPalindrome();

		if(bRet == true)
		{
			System.out.println("It is Palindrome");
		}
		else
		{
			System.out.println("It is Not Palindrome");
		}
	}
}