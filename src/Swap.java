import java.util.Scanner;

public class Swap {
	public static void main(String[]args) 
	{
		int a,b,c;
		Scanner sc=new Scanner (System.in);
		System.out.println("enter the numbers you want to swap");
		a=sc.nextInt();
		b=sc.nextInt();
		c=a;
		a=b; 
		b=c;
	    System.out.println("After swap the value is \n" +a +"\n" +b);
	}
}
