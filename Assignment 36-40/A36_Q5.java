//	Write Java program which accept number of rows and number of columns from user and display below pattern.
//	Input : iRow = 3 iCol = 4
//	Output : 1	2	3	4
//			 5	6	7	8
//			 9	10	11	12

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
		int i = 0, j = 0, iCnt = 1;

		for(i = 1; i <= iRow; i++)
		{
			for(j = 1; j <= iCol; j++)
			{
				System.out.print(iCnt + "\t");
				iCnt++;
			}
			System.out.println();
		}
	}
}

class A36_Q5
{
	public static void main(String arg[])
	{
		Pattern pobj = new Pattern();
		pobj.Accept();

		pobj.Pattern();
	}
}