//	Write java program which accept N numbers from user and return product of all odd elements.
//	Input : N : 6
//	Elements :15 66 3 70 10 88
//	Output : 45
//	Input : N : 6
//	Elements :44 66 72 70 10 88
//	Output : 0

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

class Number extends ArrayX
{
	public Number(int iNum)
	{
		super(iNum);
	}

	public int OddProduct()
	{
		int i = 0, iMult = 1, iCnt = 0;
		for(i = 0; i < Arr.length; i++)
		{
			if((Arr[i] % 2) != 0)
			{
				iCnt++;
				iMult = iMult * Arr[i];
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
		int iSize = 0, iRet = 0;

		System.out.println("Enter Number of Elements : ");
		iSize = sobj.nextInt();

		Number nobj = new Number(iSize);

		nobj.Accept();
		nobj.Display();

		iRet = nobj.OddProduct();

		System.out.println("Multiplication of Odd Elements is : " +iRet);
		
	}

}