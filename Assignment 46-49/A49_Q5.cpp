//	Write a recursive program which accept number from user and return its product of digits. 
//	Input : 523
//	Output : 30

#include<iostream>

using namespace std;

class Digit
{
public : 
	int MultI(int iNo)
	{
		int iMul = 1;
		while(iNo != 0)
		{
			iMul = iMul * (iNo % 10);
			iNo = iNo / 10;
		}
		
		return  iMul;
	}
	
	int MultR(int iNo)
	{
		static int iMul = 1;
		if(iNo != 0)
		{
			iMul = iMul * (iNo % 10);
			iNo = iNo / 10;
			MultR(iNo);
		}
		
		return iMul;
	}
};

int main()
{
	int iValue = 0, iRet = 0;
	
	cout << "Enter Value : \n";
	cin >> iValue;
	
	Digit obj;
	
	iRet = obj.MultI(iValue);
	cout << "Multiplication of Digits in Number : " << iRet << endl;
	
	iRet = obj.MultR(iValue);
	cout << "Multiplication of Digits in Number : " << iRet << endl;
	
	return 0;
}