class Bank {
	static int totalAccounts = 0;
	Bank() {
		totalAccounts++;
	}
}
public class Program29 {
	public static void main(String[] args) {
		Bank b1 = new Bank();
		Bank b2 = new Bank();
		Bank b3 = new Bank();
		Bank b4 = new Bank();
		Bank b5 = new Bank();
		System.out.println("Total number of accounts: " + Bank.totalAccounts);
	}
}