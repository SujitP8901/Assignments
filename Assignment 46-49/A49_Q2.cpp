//	Write a recursive program which accept number from user and return summation of its digits.
//	Input : 879
//	Output : 24

#include<iostream>

using namespace std;

class Digit
{
public : 
	int SumI(int iNo)
	{
		int iSum = 0;
		while(iNo != 0)
		{
			iSum = iSum + (iNo % 10);
			iNo = iNo / 10;
		}
		return iSum;
	}
	
	int SumR(int iNo)
	{
		static int iSum = 0;
		if(iNo != 0)
		{
			iSum = iSum + (iNo % 10);
			iNo = iNo / 10;
			SumR(iNo);
		}
		
		return iSum;
	}
};

int main()
{
	int iValue = 0, iRet = 0;
	
	cout << "Enter Value : \n";
	cin >> iValue;
	
	Digit obj;
	
	iRet = obj.SumI(iValue);
	cout << "Summation of Digits in Number : " << iRet << endl;
	
	iRet = obj.SumR(iValue);
	cout << "Summation of Digits in Number : " << iRet << endl;
	
	return 0;
}