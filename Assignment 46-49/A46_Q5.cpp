//	Write a recursive program which accept number from user and return its reverse number. 
//	Input : 523
//	Output : 325
#include<iostream>

using namespace std;

class Number
{
public : 
	int ReverseI(int iNo)
	{
		int iAns = 0;
		while(iNo != 0)
		{
			iAns = (iAns * 10) + (iNo % 10);
			iNo = iNo / 10;
		}
		return iAns;
	}
	
	int ReverseR(int iNo)
	{
		static int iAns = 0;
		if(iNo != 0)
		{
			iAns = (iAns * 10) + (iNo % 10);
			iNo = iNo / 10;
			
			ReverseR(iNo);
		}
		
		return iAns;
	}
}; 

int main()
{
	int iValue = 0, iRet = 0;
	Number obj;
	
	cout << "Enter Value : \n"; 
	cin >> iValue;
	
	iRet = obj.ReverseI(iValue);
	cout << "Reverse of Number : " << iRet << endl;
	
	iRet = obj.ReverseR(iValue);
	cout << "Reverse of Number : " << iRet << endl;
	
	return 0;
}