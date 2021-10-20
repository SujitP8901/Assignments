//	Write java program which accept N numbers from user and accept one another
// number as NO , check whether NO is present or not.
//	Input : N : 6
//	NO: 66
//	Elements :85 66 3 66 93 88
//	Output : TRUE
//	Input : N : 6
//	NO: 12
//	Elements :85 11 3 15 11 111
//	Output : FALSE

import java.util.*;
class Number
{
	public boolean Check(int Brr[], int iNo)
	{
		int i = 0;
		for(i = 0; i < Brr.length; i++)
		{
			if(Brr[i] == iNo)
			{
				break;
			}
		}

		if(i == Brr.length)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}

class A34_Q1
{
	public static void main(String arg []) 
	{
		Scanner sobj = new Scanner(System.in);
		int n = 0, i = 0, iValue = 0;
		boolean bRet = false;

		System.out.println("Enter Number of Elements : ");
		n = sobj.nextInt();

		int [] Arr = new int[n];
		System.out.println("Enter Elements : ");
		
		for(i = 0; i < n; i++)
		{
			Arr[i] = sobj.nextInt();
		}

		System.out.println("Enter Number to find : ");
		iValue = sobj.nextInt();

		Number nobj = new Number();
		bRet = nobj.Check(Arr, iValue);

		if(bRet == true)
		{
			System.out.println("Number is Present");
		}
		else
		{
			System.out.println("Number is Not Present");
		}
	}

}