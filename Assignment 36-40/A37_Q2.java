//	Write Java program which accept number of rows and number of columns from user and display below pattern.
//	Input : iRow = 4 iCol = 3
//	Output : 1 2 3
//			 1 2 3
//			 1 2 3
//			 1 2 3

import java.util.*;

class PatternX
{
	public int iRow = 0;
	public int iCol = 0;

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter Number of Rows : ");
		iRow = sobj.nextInt();

		System.out.println("Enter Number of Columns : ");
		iCol = sobj.nextInt();
	}
}

class Pattern extends PatternX
{
	public void Pattern()
	{
		int i = 0, j = 0;

		for(i = 1; i <= iRow; i++)
		{
			for(j = 1; j <= iCol; j++)
			{
				System.out.print(j + "\t");
			}
			System.out.println();
		}
	}
}

class A37_Q2
{
	public static void main(String arg[])
	{
		Pattern pobj = new Pattern();

		pobj.Accept();
		pobj.Pattern();
	}
}