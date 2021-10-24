//	Write Java program which accept N numbers from user and return difference 
//between summation of even elements and summation of odd elements.
//	Input : N : 6
//	Elements :85 66 3 80 93 88
//	Output : 53 (234 - 181)
import java.util.*;

class ArrayX
{
	public int Arr[];

	public ArrayX(int iNo)
	{
		Arr = new int[iNo];
	}

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		int iCnt = 0;
		System.out.println("Enter Elements : ");
		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}
	}

	public void Display()
	{
		int iCnt = 0;
		System.out.println("Entered Elements : ");
		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			System.out.println(Arr[iCnt]);
		}
	}
}

class ArrayDemo extends ArrayX
{
	public ArrayDemo(int iValue)
	{
		super(iValue);
	}

	public int Difference()
	{
		int i = 0, eSum = 0, oSum = 0;

		for(i = 0; i < Arr.length; i++)
		{
			if((Arr[i] % 2) == 0)
			{
				eSum = eSum + Arr[i];
			}
			else
			{
				oSum = oSum + Arr[i];
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
		int iRet = 0, iSize = 0;

		System.out.println("Enter Number of Elements : ");
		iSize = sobj.nextInt();

		ArrayDemo adobj = new ArrayDemo(iSize);

		adobj.Accept();
		adobj.Display();

		iRet = adobj.Difference();

		System.out.println("Difference between sum of Even Numbers and Odd Numbers is " + iRet);

	}
}