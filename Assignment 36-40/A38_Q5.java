//	Write Java program which accept String from user and display below pattern.
//	Input : Hello
//	Output : 	H
//			 	H	e
//			 	H	e	l
//			 	H	e	l	l
//			 	H	e	l	l	o
//			 	H	e	l	l
//			 	H	e	l 		
//			 	H	e	l
//			 	H	e
//			 	H

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
		int i = 0, j = 0, n = 0,k =1;
		int m = (2*(str.length())-1);

		for(i = 0; i < m; i++)
		{
			if(i==str.length()+n)
			{
				n++;
				k=j-1;
			}
			for(j = 0; j < k && j < str.length(); j++)
			{
				System.out.print(str.charAt(j)+"\t");
			}
			System.out.println("");
			k++;
			
		};
	}
}

class A38_Q5
{
	public static void main(String[] args)
	{

		Pattern pobj = new Pattern();

		pobj.Accept();
		pobj.Pattern();
	}
}

