package devanand;

public class SalesPerson extends WageEmployee{
	private int sales;
	private int comm;
	 public SalesPerson()
	 {
		 
	 }
public SalesPerson(int id,String n,int d,int m,int y ,int h,int r ,int s ,int c)

{
	super(id,n,d,m,y,h,r);
	sales=s;
	comm=c;
}
public void display() {
	super.display();
	System.out.println(sales);
	System.out.println(comm);
	}
public int calcsalary()
{
return super.calcsalary()+sales*comm;	
}
}