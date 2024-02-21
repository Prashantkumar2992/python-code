class Account
{
	private int bal;
	
	
	
	public Account() {
		super();
		this.bal = 10000;
	}



	public void  depos(int amt) {
		synchronized(this)	{
	System.out.println("balance before deposit:"+bal);
	bal=bal+amt;
	System.out.println("balance after deposit:"+bal);
		}
		}
	
	public void withdraw(int amt) {
		synchronized(this) {
		
		
		System.out.println("balance before withdraw:"+bal);
		bal=bal-amt;
		System.out.println("balance after withdraw:"+bal);
		}
		}
	}

class Accuser extends Thread {
	private String name,tot;
	private Account account;
	private int amt;
	public Accuser(String n, Account a, String tran, int amt) {
		super();
		this.name = n;
		this.tot = tran;
		this.account = a;
		this.amt = amt;
	}
	
	public void run()
	{
		if(tot.equals("depos"))
		account.depos(amt);
		else if(tot.equals("withdraw"))
			account.withdraw(amt);
				}
	}

public class deposit {

	public static void main(String[] args) {
	Account acc= new Account();
	Accuser user1= new Accuser("user1",acc, "depos", 1000);
	Accuser user2= new Accuser("user2",acc, "withdraw", 1000);
	user1.start();
	user2.start();
	
	}

}
