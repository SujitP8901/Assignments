//	Write a java program which accept string from user and check whether it contains 
//vowels in it or not.

//	Input : "marvellous"
//	Output : TRUE

//	Input : "Demo"
//	Output : TRUE

//	Input : "xyz"
//	Output : FALSE

import java.util.*;

class StringDemo
{
	public boolean CheckVowel(String st)
	{
		char ch = '\u0000';

		int i = 0;

		for(i = 0; i < st.length(); i++)
		{
			ch = st.charAt(i);
			if((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U') || (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
			{
				break;
			}
		}
		
		if(i == st.length())
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}

class A31_Q4
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		boolean bRet = false;

		System.out.println("Enter String : ");
		String str = sobj.nextLine();

		StringDemo sdobj = new StringDemo();

		bRet = sdobj.CheckVowel(str);

		if(bRet == true)
		{
			System.out.println("Vowel is Present.");
		}
		else
		{
			System.out.println("Vowel is not Present");
		}

	}
}