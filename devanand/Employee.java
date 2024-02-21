package devanand;

public abstract class Employee {
	private int empid;
	private String name;
	private Date dob;
	
	public abstract int calcsalary();
	
	
	public Employee () 
	{
		empid =102;
		name ="devanand";
		dob=new Date();
	}
	public Employee (int id,String n,int d,int m,int y)
	{
		empid=id;
		name=n;
		dob=new Date(d,m,y);
		
	}
	public void display()
	{
		System.out.println(empid);
		System.out.println(name);
		dob.display();
	}
}

	
