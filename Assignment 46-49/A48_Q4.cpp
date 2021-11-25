//	Write a recursive program which display below pattern. 
//	Input : 6
//	Output : A B C D E F

#include<iostream>

using namespace std;

class Pattern
{
public :
	void DisplayI(int iNo)
	{
		char ch = 'A';
		int iCnt = 0;
		while(iCnt < iNo)
		{
			cout << ch << "\t";
			ch++;
			iCnt++;
		}
	}
	
	void DisplayR(int iNo)
	{
		static char ch = 'A';
		if(iNo > 0)
		{
			cout << ch << "\t";
			ch++;
			iNo--;
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