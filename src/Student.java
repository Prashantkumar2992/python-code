import java.util.*;

class Assignment12{
	private int rollno;
	private String name;
	private double percentage;
	private Set<String> skillset;
	public Assignment12()
	{
		skillset=new LinkedHashSet<>();
	}
	public String getName() {
		return name;
	}

	
	public double getPercentage() {
		return percentage;
	}


	
	public void Accept()
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter student oinfo.");
		rollno=sc.nextInt();
		name=sc.next();
		percentage=sc.nextDouble();
		
		System.out.println("Enter three skills ");
		skillset.add(sc.next());
		skillset.add(sc.next());
		skillset.add(sc.next());
		
	}
	public void display() 
	{
	System.out.println( rollno + " "+ name + " "+percentage + " "+ skillset);
	}
}
 
	
	class Utility_list
	{
		
		
		private List<Assignment12> list=new ArrayList<>();
		public List<Assignment12> getList() {
			return list;
		}
		public void createList(Assignment12 a)
		{
			list.add(a);
		}
		public void printlist()
		{
			for(Assignment12 a:list)
				a.display();
		}
	}
		class UtilityReport
		{
			private Map<String,Double> m;
			public UtilityReport()
			{
				m=new LinkedHashMap<>();
			}
			public void createReport(Assignment12 a)
			{
				m.put(a.getName(),a.getPercentage());
			}
			public void showReport()
			{
				System.out.println(m);
			}
			
		}
		
public class Student {

	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		Utility_list ul=new Utility_list();
		UtilityReport ur=new UtilityReport();
		while(true)
		{
		System.out.println("1. add student");	
		System.out.println("2. show all student");
		System.out.println("3. show report");
		switch(sc.nextInt())
		
		{
		case 1:
			Assignment12 a=new Assignment12();
			a.Accept();
			ul.createList(a);
			break;
		case 2:
			ul.printlist();
			break;
		case 3:
			for(Assignment12 ass:ul.getList())
			ur.createReport(ass);
				ur.showReport();
				}
			}
		}
	}


