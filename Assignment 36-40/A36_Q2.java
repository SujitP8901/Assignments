//	 Write Java program which accept number of rows and number of columns from user and display below pattern.
//	Input : iRow = 4 iCol = 4
//	Output : A B C D
//			 a b c d
//			 A B C D
//			 a b c d

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
		char ch = '\u0000';
		int i = 0, j = 0;

		for(i = 1; i <= iRow; i++)
		{
			if((i % 2) == 0)
			{
				ch = 'a';
			}
			else
			{
				ch = 'A';
			}

			for(j = 1; j <= iCol; j++)
			{
				System.out.print(ch + "\t");
				ch++;
			}

			System.out.println();
		}
	}
}

class A36_Q2
{
	public static void main(String arg[])
	{
		Pattern pobj = new Pattern();
		pobj.Accept();

		pobj.Pattern();
	}
}