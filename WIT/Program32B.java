// program to demonstrate constructor overloading
class User {
	String name;
	User() {
		name = "";
	}
	User(String name) {
		this.name = name;
	}
}
public class Program32B {
	public static void main(String[] args) {
		User user1 = new User();
		User user2 = new User("John");
		System.out.println(user1.name);
		System.out.println(user2.name);
	}
}
