import java.util.*;
class MyThreadd implements Runnable
{
	int num;
	Thread t1,t2;
	public MyThreadd(int num)
	{
	this.num=num;
	t1=new Thread(this," ");
	t2=new Thread(this," ");
	t1.start();
	t2.start();

	}

	@Override
	public void run() 
	{
		int n=1;
		if(Thread.currentThread()==t1)
		{
			System.out.println("consecutive numbers are");
			for(int i=0;i<=10;i++)
			{
				System.out.println(num+i);
			}
		}
		
	   else if(Thread.currentThread()==t2)
			{
				System.out.println("Given numbers table is");
				      for(int i=1;i<=10;i++)
				      {
				      System.out.println(num*i);
				      }
			}
	   
		
	}
}

		
		// TODO Auto-generated method stub
		
	
	

public class Assign {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int num;
		
		System.out.println("enter number for table");
		num=sc.nextInt();
		new MyThreadd(num);
		

	}

}