//	Write a java program which accept string from user and display it in reverse order.
//	Input : "MarvellouS"
//	Output : "SuollevraM"

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
	public void Reverse()
	{
		int iCnt = 0;
		char Arr[] = str.toCharArray();

		for(iCnt = Arr.length - 1; iCnt >= 0; iCnt--)
		{
			System.out.print(Arr[iCnt]);
		}
	}
}

class A31_Q5
{
	public static void main(String arg [])
	{
		StringDemo sdobj = new StringDemo();

		sdobj.Accept();
		System.out.print("Reverse of Given String is : ");
		sdobj.Reverse();
	}
}