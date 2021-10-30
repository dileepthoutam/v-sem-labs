
class User {
	String name;
	User() {
		this.name = "name not assigned";
	}
	User(String name) {
		this.name = name;
	}
	void display() {
		System.out.println("Name: " + this.name);
	}
}

public class Program28 {
	public static void main(String[] args) {
		User user1 = new User();
		user1.display();
		User user2 = new User("John");
		user2.display();
	}
}