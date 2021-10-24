//	Write java program which accept N numbers from user and accept Range, Display all elements from that range
//	Input : N : 6
//	Start: 60
//	End : 90
//	Elements :85 66 3 76 93 88
//	Output : 85 66 76 88
//	Input : N : 6
//	Start: 30
//	End : 50
//	Elements :85 66 3 76 93 88
//	Output :
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

	public void Display(int iStart, int iEnd)
	{
		int iCnt = 0;
		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			if((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))
			{
				System.out.print(Arr[iCnt] + "\t");
			}
		}
	}
}

class A34_Q4
{
	public static void main(String arg []) 
	{
		Scanner sobj = new Scanner(System.in);
		int iSize = 0, i = 0, iValue1 = 0, iValue2 = 0;

		System.out.println("Enter Number of Elements : ");
		iSize = sobj.nextInt();

		System.out.println("Enter Start : ");
		iValue1 = sobj.nextInt();

		System.out.println("Enter End : ");
		iValue2 = sobj.nextInt();

		Number nobj = new Number(iSize);

		nobj.Accept();
		nobj.Display();

		System.out.println("Values Between Range : ");
		nobj.Display(iValue1, iValue2);

		
	}

}