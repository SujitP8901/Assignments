//	Write Java program which accept N numbers from user and return difference 
//between summation of even elements and summation of odd elements.
//	Input : N : 6
//	Elements :85 66 3 80 93 88
//	Output : 53 (234 - 181)
import java.util.*;

class ArrayDemo
{
	public int Difference(int Brr[])
	{
		int i = 0, eSum = 0, oSum = 0;

		for(i = 0; i < Brr.length; i++)
		{
			if((Brr[i] % 2) == 0)
			{
				eSum = eSum + Brr[i];
			}
			else
			{
				oSum = oSum + Brr[i];
			}
		}

		return (eSum - oSum);
	}
}

class A32_Q1
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iRet = 0, n = 0, i = 0;

		System.out.println("Enter Number of Elements : ");
		n = sobj.nextInt();

		int [] Arr = new int[n];
		System.out.println("Enter Elements :");
		for(i = 0; i < n; i++)
		{
			Arr[i] = sobj.nextInt();
		}

		// for(i = 0; i < n; i++)
		// {
		// 	System.out.println(Arr[i]);
		// }

		ArrayDemo adobj = new ArrayDemo();
		iRet = adobj.Difference(Arr);

		System.out.println("Difference between sum of Even Numbers and Odd Numbers is " + iRet);

	}
}