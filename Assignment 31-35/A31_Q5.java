//	Write a java program which accept string from user and display it in reverse order.
//	Input : "MarvellouS"
//	Output : "SuollevraM"

import java.util.*;

class StringDemo
{
	public void Reverse(String st)
	{
		int i = 0;
		char ch = '\u0000';
		for(i = st.length()-1; i >= 0; i--)
		{
			ch = st.charAt(i);
			System.out.print(ch);
		}
	}
}

class A31_Q5
{
	public static void main(String arg [])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter String : ");
		String str = sobj.nextLine();

		StringDemo sdobj = new StringDemo();

		System.out.print("Reverse of Given String is : ");
		sdobj.Reverse(str);
	}
}