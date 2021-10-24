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

	public int LastOcc(int iNo)
	{
		int iCnt = 0;
		for(iCnt = Arr.length - 1; iCnt >= 0; iCnt--)
		{
			if(Arr[iCnt] == iNo)
			{
				break;
			}
		}

		if(iCnt == -1)
		{
			return -1;
		}
		else
		{
			return iCnt;
		}
	}
}

class A34_Q3
{
	public static void main(String arg []) 
	{
		Scanner sobj = new Scanner(System.in);
		int iSize = 0, iValue = 0, iRet = 0;

		System.out.println("Enter Number of Elements : ");
		iSize = sobj.nextInt();

		System.out.println("Enter Number to find : ");
		iValue = sobj.nextInt();

		Number nobj = new Number(iSize);

		nobj.Accept();
		nobj.Display();

		iRet = nobj.LastOcc(iValue);

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