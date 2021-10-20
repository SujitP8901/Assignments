//	Write java program which accept N numbers from user and accept Range, Display all elements from that range
//	Input : N : 6
//	Start: 60
//	End : 90
//	Elements :85 66 3 76 93 88
//	Output : 85 66 76 88
//	Input : N : 6
//	Start: 30
//	End : 50
//	Elements :85 66 3 76 93 88
//	Output :
import java.util.*;
class Number
{
	public void Display(int Brr[], int iStart, int iEnd)
	{
		int i = 0;
		for(i = 0; i < Brr.length; i++)
		{
			if((Brr[i] > iStart) && (Brr[i] < iEnd))
			{
				System.out.print(Brr[i] + "\t");
			}
		}
	}
}

class A34_Q4
{
	public static void main(String arg []) 
	{
		Scanner sobj = new Scanner(System.in);
		int n = 0, i = 0, iValue1 = 0, iValue2 = 0;

		System.out.println("Enter Number of Elements : ");
		n = sobj.nextInt();

		int [] Arr = new int[n];
		System.out.println("Enter Elements : ");
		
		for(i = 0; i < n; i++)
		{
			Arr[i] = sobj.nextInt();
		}

		System.out.println("Enter Start : ");
		iValue1 = sobj.nextInt();

		System.out.println("Enter End : ");
		iValue2 = sobj.nextInt();

		Number nobj = new Number();

		System.out.println("Values Between Range : ");
		nobj.Display(Arr, iValue1, iValue2);

		
	}

}