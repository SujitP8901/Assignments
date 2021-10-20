//   Write Java program which accept N numbers from user and display all such 
// elements which are even and divisible by 5.
//  Input : N : 6
//  Elements :85 66 3 80 93 88
//  Output : 80
import java.util.*;

class ArrayDemo
{
    public void Display(int Brr[])
    {
        int i = 0;

        for(i = 0; i < Brr.length; i++)
        {
            if(((Brr[i] % 2) == 0) && ((Brr[i] % 5) == 0))
            {
                System.out.print(Brr[i] + "\t");
            }
        }
    }
}

class A32_Q3
{
    public static void main(String str[])
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0, n = 0;

        System.out.println("Enter Number of Elements : ");
        n = sobj.nextInt();

        int [] Arr = new int[n];

        System.out.println("Enter Elements : ");
        for(i = 0; i < n; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        ArrayDemo adobj = new ArrayDemo();

        System.out.println("Even Numbers which are divisible by 5 :");
        adobj.Display(Arr);
    }
}