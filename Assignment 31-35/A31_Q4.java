//	Write a java program which accept string from user and check whether it contains 
//vowels in it or not.

//	Input : "marvellous"
//	Output : TRUE

//	Input : "Demo"
//	Output : TRUE

//	Input : "xyz"
//	Output : FALSE

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
	public boolean CheckVowel()
	{
		char Arr[] = str.toCharArray();

		int iCnt = 0;

		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			if((Arr[iCnt] == 'A') || (Arr[iCnt] == 'E') || (Arr[iCnt] == 'I') || (Arr[iCnt] == 'O') || (Arr[iCnt] == 'U') || (Arr[iCnt] == 'a') || (Arr[iCnt] == 'e') || (Arr[iCnt] == 'i') || (Arr[iCnt] == 'o') || (Arr[iCnt] == 'u'))
			{
				break;
			}
		}

		if(iCnt == Arr.length)
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

		StringDemo sdobj = new StringDemo();

		sdobj.Accept();

		bRet = sdobj.CheckVowel();

		if(bRet == true)
		{
			System.out.println("Vowel is Present");
		}
		else
		{
			System.out.println("Vowel is not Present");
		}

	}
}