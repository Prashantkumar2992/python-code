class MyThread implements Runnable
{
	Thread t1,t2;
	public MyThread()
	{
		t1=new Thread(this,"Hello");
		t2=new Thread(this,"Hi...");
		t1.start();
		t2.start();
	}
	 public void run() {
         for(int i=0;i<100;i++)
         {
        	 if(Thread.currentThread()==t1)
        		 System.out.println("hello.."+i);
        	 else if(Thread.currentThread()==t2)
        		 System.out.println("hii.."+i);
        	 
         }
          
     }
}
public class Tester1 {
	public static void main(String[]args) {
		
		new MyThread();
	}

}
