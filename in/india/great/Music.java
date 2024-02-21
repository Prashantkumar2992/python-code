package in.india.great;
public class Music {
	private int srno;
	private String make;
	private double cost;
	private static int cnt;
	static {
		cnt=0;
		
	}
	public Music()
	{
		cnt++;
	}
	public Music(int srno, String make,double cost)
	{
		this.srno=srno;
		this.make=make;
		this.cost=cost;
		cnt++;
	}
	public void display()
	{
		System.out.println(srno+" "+make+" "+cost);	
	}
	public static void showCnt()
	{
	
		System.out.println("Number of object =" +cnt);
	}
}