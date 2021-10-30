class Bank {
	static int totalAccounts = 0;
	Bank() {
		totalAccounts++;
	}
	static String getTotalAccounts() {
		return "Total Accounts: " + totalAccounts;
	}
}
public class Program30 {
	public static void main(String[] args) {
		Bank b1 = new Bank();
		Bank b2 = new Bank();
		System.out.println(Bank.getTotalAccounts());
		Bank b3 = new Bank();
		Bank b4 = new Bank();
		System.out.println(Bank.getTotalAccounts());
	}
}