class Laptop 
{
	public static Laptop l2;
	private int srno;
	private String make;
	private double cost;
	public Laptop()
	{
		this(201,"asus",75000);
		System.out.println("It is constructor chaining");//constructor chaining calling a constructor from another constructor.
	}
		
	public int getSrno() {
		return srno;
	}

	public void setSrno(int srno) {
		this.srno = srno;
	}

	public String getMake() {
		return make;
	}
	static 
	{
		System.out.println("I am static block");
	}

	public void setMake(String make) {
		this.make = make;
	}

	public double getCost() {
		return cost;
	}

	public void setCost(double cost) {
		this.cost = cost;
	}

	public Laptop(int srno, String make, double cost)//parameterized constructor
	{
		this.srno = srno;
		this.make = make;
		this.cost = cost;
	}
	
	public String toString()//
	{
		 return 101 + " " + " "+ "dell" + " "+ 45000;
	}
	public void display() 
	{
		System.out.println(srno +" "+make+" "+cost);
	}
}
public class hijack
{
	public static void main(String[] args) {
		Laptop l1=new Laptop(101,"dell",90000);
		Laptop l2=new Laptop();
		System.out.println(l1.toString());// TODO Auto-generated method stub

	}
}

