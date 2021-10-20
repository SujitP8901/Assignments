//	Write java program which accept N numbers from user and accept one another 
//	number as NO , return index of first occurrence of that NO.
//	Input : N : 6
//	NO: 66
//	Elements :85 66 3 66 93 88
//	Output : 1
//	Input : N : 6
//	NO: 12
//	Elements :85 11 3 15 11 111
//	Output : -1

import java.util.*;
class Number
{
	public int FirstOcc(int Brr[], int iNo)
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
			return -1;
		}
		else
		{
			return i;
		}
	}
}

class A34_Q2
{
	public static void main(String arg []) 
	{
		Scanner sobj = new Scanner(System.in);
		int n = 0, i = 0, iValue = 0, iRet = 0;

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
		iRet = nobj.FirstOcc(Arr, iValue);

		if(iRet != -1)
		{
			System.out.println("First Occurence : " +iRet);
		}
		else
		{
			System.out.println(iRet);
		}
	}

}