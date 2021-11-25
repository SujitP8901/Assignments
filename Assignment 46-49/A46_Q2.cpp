//	Write a recursive program which accept number from user and return largest digit
//	Input : 87983
//	Output : 9

#include<iostream>

using namespace std;

class Number
{
public : 
	int MaxI(int iNo)
	{
		int iMax = 0, iDigit = 0;
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			if(iDigit > iMax)
			{
				iMax = iDigit;
			}
			iNo = iNo / 10;
		}
		return iMax;
	}
	
	int MaxR(int iNo)
	{
		static int iMax = 0;
		int iDigit = 0;
		if(iNo != 0)
		{
			iDigit = iNo % 10;
			if(iDigit > iMax)
			{
				iMax = iDigit;
			}
			iNo = iNo / 10;
			MaxR(iNo);
		}
		return iMax;
	}
};

int main()
{
	int iValue = 0, iRet = 0;
	
	cout << "Enter Number : \n";
	cin >> iValue;
	
	Number obj;
	
	iRet = obj.MaxI(iValue);
	cout << "Maximum Digit is : " << iRet << endl;
	
	iRet = obj.MaxR(iValue);
	cout << "Maximum Digit is : " << iRet << endl;
	
	return 0;
}