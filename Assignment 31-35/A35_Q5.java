//	Accept string from user and check whether the string is palindrome or not without considering its case.
//	Input : "1abccBA1"
//	Output : TRUE
import java.util.*;

class StringDemo
{
	public boolean CheckPalindrome(String st)
	{
		char Arr[] = st.toCharArray();

		int iStart = 0, iEnd = Arr.length - 1;
		char temp = '\u0000';
		while(iStart < iEnd)
		{
			temp = Arr[iStart];
			Arr[iStart] = Arr[iEnd];
			Arr[iEnd] = temp;
			iStart++;
			iEnd--;
		}

		String newstr = new String(Arr);

		boolean bFlag = newstr.equalsIgnoreCase(st);

		return bFlag;
	}
}

class A35_Q5
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);

		String str;
		boolean bRet = false;
		System.out.println("Enter String : ");
		str = sobj.nextLine();

		StringDemo sdobj = new StringDemo();

		bRet = sdobj.CheckPalindrome(str);

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