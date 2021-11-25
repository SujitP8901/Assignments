//	Write a recursive program which display below pattern. 
//	Input : 5
//	Output : * * * * *

#include<iostream>

using namespace std;

class Pattern
{
public :
	void DisplayI(int iNo)
	{
		int iCnt = 1;
		while(iCnt <= iNo)
		{
			cout << "*\t";
			iCnt++;
		}
	}
	
	void DisplayR(int iNo)
	{
		static int iCnt = 1;
		if(iCnt <= iNo)
		{
			cout << "*\t";
			iCnt++;
			DisplayR(iNo);
		}
	}
};

int main()
{
	int iValue = 0;
	Pattern obj;
	
	cout << "Enter Value : \n";
	cin >> iValue;
	
	obj.DisplayI(iValue);
	
	cout << endl;
	
	obj.DisplayR(iValue);
	
	return 0;
}