//	Write Java program which accept String from user and display below pattern.
//	Input : Hello
//	Output : 	H
//				H	e
//				H	e	l
//				H	e	l	l
//				H	e	l	l	o

import java.util.*;

class StringPattern
{
	public String str;

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter String : ");
		str = sobj.next();
	}
}

class Pattern extends StringPattern
{
	public void Pattern()
	{
		int i = 0, j = 0;

		for(i = 1; i <= str.length(); i++)
		{
			for(j = 1; j <= i; j++)
			{
				System.out.print(str.charAt(j-1) + "\t");
			}
			System.out.println();
		} 
	}
}

class A38_Q3
{
	public static void main(String arg[])
	{
		Pattern pobj = new Pattern();

		pobj.Accept();
		pobj.Pattern();
	}
}