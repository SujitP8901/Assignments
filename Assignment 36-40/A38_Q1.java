//	Write Java program which accept String from user and display below pattern.
//	Input : Hello
//	Output : H  e	l	l	o
//			 H	e	l	l	o
//			 H	e	l	l	o
//			 H	e	l	l	o
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
		char Arr[] = str.toCharArray();
		int iRow = str.length() - 1, iCol = str.length();

		int i = 0, j = 0;

		for(i = 1; i <= iRow; i++)
		{
			for(j = 0; j < iCol; j++)
			{
				System.out.print(Arr[j] + "\t");
			}
			System.out.println();
		} 
	}
}

class A38_Q1
{
	public static void main(String arg[])
	{
		Pattern pobj = new Pattern();

		pobj.Accept();
		pobj.Pattern();
	}
}