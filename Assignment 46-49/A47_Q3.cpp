//	Write a recursive program which display below pattern.
//	Input : 5  
//Output : 5 4 3 2 1

#include<iostream>

using namespace std;

class Pattern
{
public :
	void DisplayI(int iNo)
	{
		int iCnt = iNo;
		while(iCnt > 0)
		{
			cout << iCnt << "\t";
			iCnt--;
		}
	}
	
	void DisplayR(int iNo)
	{
		static int iCnt = iNo;
		if(iCnt > 0)
		{
			cout << iCnt << "\t";
			iCnt--;
			DisplayR(iNo);
		}
	}
};

int main()
{
	int iValue = 0;
	
	cout << "Enter Value : \n";
	cin >> iValue;
	
	Pattern obj;
	obj.DisplayI(iValue);
	
	cout << "\n";
	
	obj.DisplayR(iValue);
	
	return 0;
}