package devanand;

public  class WageEmployee extends Employee{
private int hours;
private int rate;
public WageEmployee()
{
	hours=0;
	rate=0;
	
}
public WageEmployee(int id,String n,int d,int m,int y,int h,int r)
{
	super(id,n,d,m,y);
	hours=h;
	rate=r;
}
public void display() {
	super.display();
	System.out.println(hours);
	System.out.println(rate);
	
}
public int calcsalary()
{
	return hours*rate;}
}

