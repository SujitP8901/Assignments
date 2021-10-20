//	Write a java program which accept string from user and count number of small characters.
//	Input : "Marvellous"
//	Output : 9
import java.util.*;

class StringDemo
{
	public int CountSmall(String st)
	{
		int iCnt = 0, i = 0;
		char ch = '\u0000';

		for(i = 0; i < st.length(); i++)
		{
			ch = st.charAt(i);
			if((ch >= 'a') && (ch <= 'z'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}

class A31_Q2
{
	public static void main(String arg [])
	{
		Scanner sobj = new Scanner(System.in);
		
		int iRet = 0;

		System.out.println("Enter String : ");
		String str = sobj.nextLine();

		StringDemo sdobj = new StringDemo();
		iRet = sdobj.CountSmall(str);

		System.out.println("Count of Small Characters is : " + iRet);
	}

}