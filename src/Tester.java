import java.util.*;

class Product implements Comparable <Product>
{
	private int pid;
	private String make;
	private double cost;
	
	public int getPid() {
		return pid;
	}
	

	
	public Product (int pid,String make,double cost) {
		super();
		this.pid=pid;
		this.make=make;
		this.cost=cost;
	}

	//Generate hashcode and equals using IDE
@Override
	public int hashCode() {
		return Objects.hash(cost, make, pid);
	}


	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Product other = (Product) obj;
		return Double.doubleToLongBits(cost) == Double.doubleToLongBits(other.cost) && Objects.equals(make, other.make)
				&& pid == other.pid;
	}


public String toString() {
	return "Product[pid="+pid +",make="+make +",cost="+cost+"]\n";
	
}
public int compareTo(Product o) {
	if(this.cost>o.cost)
		return 1;
	else if(this.cost<o.cost)
		return -1;
	else
		return 0;
}
}

class CompareProduct implements Comparator<Product>{

	@Override
		public int compare(Product o1,Product o2)
		{
			if(o1.getPid()>o2.getPid())
				return 1;
			else if(o1.getPid()<o2.getPid())
				return -1;
			else 
				return 0;
		
		
	}
	
	
}
public class Tester {
	public static void main(String[] args) {
	//list<Product> list=new Treelist<>();
		List<Product> list=new ArrayList<>();
	list.add(new Product(101,"maker",35));
	list.add(new Product(101,"bottel",34));
	list.add(new Product(101,"keyboard",500));
	list.add(new Product(101,"mouse",500));
	System.out.println(list);
	Collections.sort(list);
	System.out.println();
	Collections.sort(list,new CompareProduct());
	System.out.println(list);

	}

}
