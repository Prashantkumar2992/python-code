import java.util.Scanner;
 class Student {
	private int rollno;
	private String name;
	private  double percent;
	private static int c;
	static private String c_name="Center For Development Of Advanced Computing ";
	Scanner sc=new Scanner(System.in);
	
	public  Student()
	{
		
		c++;
	}
	
	

	public Student(int rollno, String name, double percent) {
		super();
		this.rollno = rollno;
		this.name = name;
		this.percent = percent;
		c++;
	}
	public void Data()
	{
		System.out.println("Enter students name:");
		name=sc.nextLine();
		System.out.println("Enter students roll no:");
		rollno=sc.nextInt();
		
	}
	static {
		c=0;
	}
	public double Percentage()
	{
		int sum=0;
		int a[]=new int [10];
		System.out.println("Enter marks:");
		for(int i=0;i<7;i++)
		{
			a[i]=sc.nextInt();
			sum=sum+a[i];
		}
		return percent=sum/7;
	}
	public void Display()
	{
		System.out.println("roll no = "+rollno +"\n"+ "name="+name+"\n"+"college name="+c_name+"\n"+"Percentage= "+percent+"\n"+" no.of object="+c);
	}
}


public class college {

	public static void main(String[] args) {
		Student s1= new Student();
		s1.Data();
		s1.Percentage();
		s1.Display();
		
		
		// TODO Auto-generated method stub

	}

}

