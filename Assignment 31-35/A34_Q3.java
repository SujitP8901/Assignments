//	Write java program which accept N numbers from user and accept one another number as NO , return index of last occurrence of that NO.
//	Input : N : 6
//	NO: 66
//	Elements :85 66 3 66 93 88
//	Output : 3
//	Input : N : 6
//	NO: 93
//	Elements :85 66 3 66 93 88
//	Output : 4
//	Input : N : 6
//	NO: 12
//	Elements :85 11 3 15 11 111
//	Output : -1

import java.util.*;
class Number
{
	public int LastOcc(int Brr[], int iNo)
	{
		int i = 0;
		for(i = Brr.length - 1; i >= 0; i--)
		{
			if(Brr[i] == iNo)
			{
				break;
			}
		}

		if(i == -1)
		{
			return -1;
		}
		else
		{
			return i;
		}
	}
}

class A34_Q3
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
		iRet = nobj.LastOcc(Arr, iValue);

		if(iRet != -1)
		{
			System.out.println("Last Occurence : " +iRet);
		}
		else
		{
			System.out.println(iRet);
		}
	}

}