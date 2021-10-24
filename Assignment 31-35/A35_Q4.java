//	Accept sing from user and reverse the contents of that string by toggling the case.
//	Input : "aCBdef"
//	Output : "FEDcbA"

import java.util.*;

class StringX
{
	public String str;

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter String : ");
		str = sobj.nextLine();
	}
}

class StringDemo extends StringX
{
	public String StrRevTogX()
	{
		char Arr[] = str.toCharArray();
		int iCnt = 0, iLength = Arr.length - 1;
		char temp;

		while(iCnt < iLength)
		{
			temp = Arr[iCnt];
			Arr[iCnt] = Arr[iLength];
			Arr[iLength] = temp;
			iCnt++;
			iLength--;
		}

		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
			{
				Arr[iCnt] = (char)(Arr[iCnt] + 'a' - 'A');
			}
			else if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
			{
				Arr[iCnt] = (char)(Arr[iCnt] + 'A' - 'a');
			}
		}

		return new String(Arr);
	}
}

class A35_Q4
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		StringDemo sdobj = new StringDemo();

		sdobj.Accept();

		String Ans = sdobj.StrRevTogX();

		System.out.println("Modified String : " +Ans);
	}
}