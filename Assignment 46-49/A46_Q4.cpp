//	Write a recursive program which accept number from user and return smallest digit
//	Input : 87983
//	Output : 3

#include<iostream>
using namespace std;

class Number
{
public : 
	int MinI(int iNo)
	{
		int iMin = iNo % 10, iDigit = 0;
		iNo = iNo / 10;
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			if(iDigit < iMin)
			{
				iMin = iDigit;
			}
			iNo = iNo / 10;
		}
		
		return iMin;
	}
	
	int MinR(int iNo)
	{
		int iDigit = 0;
		static int iMin = 10;
		
		if(iNo != 0)
		{
			iDigit = iNo % 10;
			if(iDigit < iMin)
			{
				iMin = iDigit;
			}
			iNo = iNo / 10;
			MinR(iNo);
		}
		
		return iMin;
	}
};

int main()
{
	int iValue = 0, iRet = 0;
	Number obj;
	
	cout << "Enter Number : \n";
	cin >> iValue;
	
	iRet = obj.MinI(iValue);
	cout << "Minimum Digit : " << iRet << endl;
	
	iRet = obj.MinR(iValue);
	cout << "Minimum Digit : " << iRet << endl;
	
	return 0;
}