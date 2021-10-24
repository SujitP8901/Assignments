//	Write Java program which accept number of rows and number of columns from user and display below pattern.
//	Input : iRow = 4 iCol = 5
//	Output : 4 4 4 4 4
//			 3 3 3 3 3
//			 2 2 2 2 2
//			 1 1 1 1 1

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

		for(i = iRow; i >= 1; i--)
		{
			for(j = 1; j <= iCol; j++)
			{
				System.out.print(i + "\t");
			}
			System.out.println();
		}
	}
}

class A36_Q4
{
	public static void main(String arg[])
	{
		Pattern pobj = new Pattern();
		pobj.Accept();

		pobj.Pattern();
	}
}