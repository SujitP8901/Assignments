//	Write java program which accept N numbers from user and return product of all odd elements.
//	Input : N : 6
//	Elements :15 66 3 70 10 88
//	Output : 45
//	Input : N : 6
//	Elements :44 66 72 70 10 88
//	Output : 0

import java.util.*;
class Number
{
	public int OddProduct(int Brr[])
	{
		int i = 0, iMult = 1, iCnt = 0;
		for(i = 0; i < Brr.length; i++)
		{
			if((Brr[i] % 2) != 0)
			{
				iCnt++;
				iMult = iMult * Brr[i];
			}
		}
		
		if(iCnt == 0)
		{
			return 0;
		}
		else
		{
			return iMult;
		}
	}
}

class A34_Q5
{
	public static void main(String arg []) 
	{
		Scanner sobj = new Scanner(System.in);
		int n = 0, i = 0, iRet = 0;

		System.out.println("Enter Number of Elements : ");
		n = sobj.nextInt();

		int [] Arr = new int[n];
		System.out.println("Enter Elements : ");
		
		for(i = 0; i < n; i++)
		{
			Arr[i] = sobj.nextInt();
		}

		Number nobj = new Number();
		iRet = nobj.OddProduct(Arr);

		System.out.println("Multiplication of Odd Elements is : " +iRet);
		
	}

}