//	Write a java program which accept string from user and count number of small characters.
//	Input : "Marvellous"
//	Output : 9
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
	public int CountSmall()
	{
		char Arr[] = str.toCharArray();
		int iCnt = 0, i = 0;

		for(i = 0; i < Arr.length; i++)
		{
			if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
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

		StringDemo sdobj = new StringDemo();
		
		sdobj.Accept();

		iRet = sdobj.CountSmall();

		System.out.println("Count of Small Characters is : " + iRet);
	}

}