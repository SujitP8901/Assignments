//	Write a java program which accept number of rows and number of columns from user and display below pattern.
//	Input : iRow = 6 iCol = 6
//	Output : * * * * * *
//			 *       * *
//			 *     *   *
//			 *   *     *
//			 * *       *
//			 * * * * * *
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
			for(j = iCol; j >= 1; j--)
			{
				if((i == j) || (i == 1) || (i == iRow) || (j == 1) || (j == iCol))
				{
					System.out.print("*\t");
				}
				else
				{
					System.out.print("\t");
				}
			}
			System.out.println();
		}
	}
}

class A40_Q3
{
	public static void main(String arg[])
	{
		Pattern pobj = new Pattern();

		pobj.Accept();
		pobj.Pattern();
	}
}