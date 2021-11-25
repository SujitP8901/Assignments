//	Write a recursive program which accept string from user and count white spaces.
//	Input : HE llo WOr lD
//	Output : 3

#include<iostream>
using namespace std;

class String
{
public :
	int WhiteSpaceI(char *str)
	{
		int iCnt = 0;
		while(*str != '\0')
		{
			if(*str == ' ')
			{
				iCnt++;
			}
			str++;
		}
		return iCnt;
	}
	
	int WhiteSpaceR(char * str)
	{
		static int iCnt = 0;
		if(*str != '\0')
		{
			if(*str == ' ')
			{
				iCnt++;
			}
			str++;
			WhiteSpaceR(str);
		}
		return iCnt;
	}
};

int main()
{
	char Arr[20];
	int iRet = 0;
	
	cout << "Enter String : \n";
	scanf("%[^'\n']s", Arr);
	
	String obj;
	
	iRet = obj.WhiteSpaceI(Arr);
	cout << "Number of White SpacesIare : " << iRet << endl;
	
	iRet = obj.WhiteSpaceR(Arr);
	cout << "Number of White SpacesIare : " << iRet << endl;
	
	return 0;
}