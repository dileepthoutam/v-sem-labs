
class Bank {
	public int balance;
	public int deposit(int amount) {
		balance += amount;
		return balance;
	}
	public int withdraw(int amount) {
		balance -= amount;
		return balance;
	}
	public int getBalance() {
		return balance;
	}
}

public class Program27 {
	public static void main(String[] args) {
		Bank user1 = new Bank();
		user1.deposit(100);
		user1.withdraw(50);
		System.out.println("Balance of user1: " + user1.getBalance());
	}
}
