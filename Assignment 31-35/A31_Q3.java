//	Write a java program which accept string from user and return difference between frequency of small characters and frequency 
//of capital characters.
//	Input : "MarvellouS"
//	Output : 6 (8-2)
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
	public int CountDiff()
	{
		int cCount = 0, sCount = 0, i = 0;
		char Arr[] = str.toCharArray();

		for(i = 0; i < Arr.length; i++)
		{
			if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
			{
				cCount++;
			}
			else if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
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

		StringDemo sdobj = new StringDemo();

		sdobj.Accept();

		iRet = sdobj.CountDiff();

		System.out.println("Difference between Count of Small charaters and Capital Charaters is : " +iRet);
	}
}