//	Write Java program which accept String from user and display below pattern.
//	Input : Hello
//	Output : H e l l o
//			 H e l l *
//			 H e l * *
//			 H e * * *
//			 H * * * *
//			 H e * * *
//			 H e l * *
//			 H e l l *
//			 H e l l o

import java.util.*;

class StringPattern
{
	public String str;

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter String : ");
		str = sobj.next();
	}
}

class Pattern extends StringPattern
{ 
	public void Pattern()
	{
		int i = 0, j = 0,k = 1;
		int m = (2*str.length())-1;
		int n = 0;
		
		int c = 0;

		for(i = 0; i < m; i++)
		{

			if(i ==str.length()+n)
			{
				n++;
				k =c-1;
			}
			c=0;

			for(j = 0; j < str.length(); j++)
			{

				
				if(j < k)
				{
					c++;
					System.out.print(str.charAt(j)+"\t");
				}
				else
				{
					System.out.print("#\t");
				}
			}
			k++;

			System.out.println("");
		}
	}

}

class A39_Q4
{
	public static void main(String[] args)
	{
		Pattern pobj = new Pattern();

		pobj.Accept();
		pobj.Pattern();
	}
}

