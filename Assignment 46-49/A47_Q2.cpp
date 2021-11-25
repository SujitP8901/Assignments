//	Write a recursive program which display below pattern.
//	Input : 5 
//	Output : 1 2 3 4 5

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
			cout << iCnt << "\t";
			iCnt++;
		}
	}
	
	void DisplayR(int iNo)
	{
		static int iCnt = 1;
		if(iCnt <= iNo)
		{
			cout << iCnt << "\t";
			iCnt++;
			DisplayR(iNo);
		}
	}
};

int main()
{
	int iValue = 0;
	
	cout << "Enter Number : \n";
	cin >> iValue;
	
	Pattern obj;
	obj.DisplayI(iValue);
	
	cout << endl;
	
	obj.DisplayR(iValue);
	
	return 0;
}