//	Write a recursive program which accept number from user and return its factorial. 
//	Input : 5
//	Output : 120
#include<iostream>

using namespace std;

class Number
{
public : 
	int FactI(int iNo)
	{
		int iFact = 1;
		while(iNo != 0)
		{
			iFact = iFact * iNo;
			iNo--;
		}
		
		return iFact;
	}
	
	int FactR(int iNo)
	{
		static int iFact = 1;
		if(iNo != 0)
		{
			iFact = iFact * iNo;
			iNo--;
			FactR(iNo);
		}
		
		return iFact;
	}
};

int main()
{
	int iValue = 0, iRet = 0;
	
	cout << "Enter Value : \n";
	cin >> iValue;
	
	Number obj;
	
	iRet = obj.FactI(iValue);
	cout << "Factorial of Number : " << iRet << endl;
	
	iRet = obj.FactR(iValue);
	cout << "Factorial of Number : " << iRet << endl;
	
	return 0;
}