//	Write a recursive program which display below pattern. 
//	Input : 5
//	Output : a b c d e f

#include<iostream>

using namespace std;

class Pattern 
{
public :
	void DisplayI(int iNo)
	{
		char ch = 'a';
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
		static char ch = 'a';
		static int iCnt = 0;
		
		if(iCnt < iNo)
		{
			cout << ch << "\t";
			ch++;
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
