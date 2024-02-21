
public class Music {
	package devanand;

import devanand.Music;

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
			 //make="typhoo";
			System.out.println("Number of object =" +cnt);
		}
	public class Drama
	{
		public static void main(String[] args) {
			Music m1=new Music();
			Music m2=new Music(10,"hp",100000);
			Music m3=new Music(14,"dell",120000);
			Music.showCnt();// TODO Auto-generated method stub

		}

	}
	}

}
