//	Write Java program which accept N numbers from user and display all such 
//	elements which are divisible by 5.
//	Input : N : 6
//	Elements :85 66 3 80 93 88
//	Output : 85 80

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

	public void Display1()
	{
		int i = 0;
		for(i = 0; i < Arr.length; i++)
		{
			if((Arr[i] % 5) == 0)
			{
				System.out.print(Arr[i] + "\t");
			}
		}
	}
}

class A32_Q2
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		int iSize = 0;

		System.out.println("Enter Number of Elements : ");
		iSize = sobj.nextInt();

		ArrayDemo adobj = new ArrayDemo(iSize);

		adobj.Accept();
		adobj.Display();

		System.out.println("Numbers Divisible by 5 : ");
		adobj.Display1();
	}

}