//	Write a java program which accept string from user and return difference between frequency of small characters and frequency 
//of capital characters.
//	Input : "MarvellouS"
//	Output : 6 (8-2)
import java.util.*;

class StringDemo
{
	public int CountDiff(String st)
	{
		int cCount = 0, sCount = 0, i = 0;
		char ch = '\u0000';

		for(i = 0; i < st.length(); i++)
		{
			ch = st.charAt(i);
			if((ch >= 'A') && (ch <= 'Z'))
			{
				cCount++;
			}
			else if((ch >= 'a') && (ch <= 'z'))
			{
				sCount++;
			}
		}
		return (sCount - cCount);
	}
}

class A31_Q3
{
	public static void main(String arg [])
	{
		Scanner sobj = new Scanner(System.in);
		int iRet = 0;
		System.out.println("Enter String : ");
		String str = sobj.nextLine();

		StringDemo sdobj = new StringDemo();
		iRet = sdobj.CountDiff(str);

		System.out.println("Difference between Count of Small charaters and Capital Charaters is : " +iRet);
	}
}