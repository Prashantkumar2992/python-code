import java.util.Scanner;

public class average {

	public static void main(String[] args) 
	{
		int eng,mat,ssc,sst,geo,average;
		Scanner sc=new Scanner(System.in);
		System.out.println("enter marks for average");// TODO Auto-generated method stub
        eng=sc.nextInt();
        mat=sc.nextInt();
        ssc=sc.nextInt();
        sst=sc.nextInt();
        geo=sc.nextInt();
        System.out.println("Average is =" +(average=(eng+mat+ssc+sst+geo)/5));
        double doubleaverage = (int)average ;
        System.out.println(doubleaverage);
	}

}
