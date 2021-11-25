//	Write a recursive program which accept number from user and display below pattern. 
//	Input : 5
//	Output : 5 * 4 * 3 * 2 * 1 *
#include<iostream>

using namespace std;

class Pattern
{
public :
	void DisplayI(int iNo)
	{
		while(iNo != 0)
		{
			cout << iNo << "\t*\t";
			iNo--;
		}
	}
	
	void DisplayR(int iNo)
	{
		if(iNo != 0)
		{
			cout << iNo << "\t*\t";
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
	
	cout << endl;
	
	obj.DisplayR(iValue);
	
	return 0;
}