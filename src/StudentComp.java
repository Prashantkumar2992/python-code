import java.util.*;
class Assignment13 implements Comparable<Assignment13>{
	private int rollno;
	private String name;
	private double percentage;
	public int getRollno() {
		return rollno;
	}
	public  Assignment13(int rollno,String name,double percentage) {
		super();
		this.rollno=rollno;
		this.name=name;
		this.percentage=percentage;
	}
	//genarating HashCode and Equals method
	@Override
	public int hashCode() {
		return Objects.hash(percentage, rollno);
	}
	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Assignment13 other = (Assignment13) obj;
		return Double.doubleToLongBits(percentage) == Double.doubleToLongBits(other.percentage)
				&& rollno == other.rollno;
	}
	@Override
	public int compareTo(Assignment13 o) {
		if(this.rollno>o.rollno)
			return 1;
		else if(this.rollno<o.rollno)
			return -1;
		else
			return 0;
		// TODO Auto-generated method stub
		
	}
	


class CompareAssignment13 implements Comparator<Assignment13>{

	@Override
		public int compare(Assignment13 o1,Assignment13 o2)
		{
			if(o1.getRollno()>o2.getRollno())
				return 1;
			else if(o1.getRollno()<o2.getRollno())
				return -1;
			else 
				return 0;
		}
		
		
	
	public String toString() {
		return "Assignment13[rollno="+ rollno +",name="+ name +",percentage="+ percentage +"]\n";
		
	}
}
	
public class StudentComp {

	public static void main(String[] args) {
		
		// TODO Auto-generated method stub

	}

}
		}

