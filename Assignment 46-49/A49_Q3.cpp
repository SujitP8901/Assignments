//	Write a recursive program which accept string from user and count number of characters.
//	Input : Hello
//	Output : 5
#include<iostream>

using namespace std;

class String
{
public : 
	int strlenI(char * str)
	{
		int iCnt = 0;
		while(*str != '\0')
		{
			iCnt++;
			str++;
		}
		return iCnt;
	}
	
	int strlenR(char *str)
	{
		static int iCnt = 0;
		if(*str != '\0')
		{
			iCnt++;
			str++;
			strlenR(str);
		}
		
		return iCnt;
	}
};

int main()
{
	int iRet = 0;
	char arr[40];
	
	cout << "Enter String : \n";
	scanf("%[^'\n']s", arr);
	
	String obj;
	
	iRet = obj.strlenI(arr);
	cout << "String Length : " << iRet << endl;
	
	iRet = obj.strlenR(arr);
	cout << "String Length : " << iRet << endl;
	
	return 0;
}