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

	public boolean Check(int iNo)
	{
		int i = 0;
		for(i = 0; i < Arr.length; i++)
		{
			if(Arr[i] == iNo)
			{
				break;
			}
		}

		if(i == Arr.length)
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
		int iSize = 0, iValue = 0;
		boolean bRet = false;

		System.out.println("Enter Number of Elements : ");
		iSize = sobj.nextInt();

		System.out.println("Enter Number to find : ");
		iValue = sobj.nextInt();

		Number nobj = new Number(iSize);

		nobj.Accept();
		nobj.Display();

		bRet = nobj.Check(iValue);

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