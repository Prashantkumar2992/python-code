package Tester;
import devanand.*;
public class Tester {

	public static void main(String[] args) 
	{
		Employee e=new WageEmployee(5502,"jivan",07,9,1997,9,1200);
		e.display();
		Employee s =new SalesPerson(5520,"ramu",21,2,1990,50,200,9,9);
		s.display();
		System.out.println(s.calcsalary());
		// TODO Auto-generated method stub

	}

}