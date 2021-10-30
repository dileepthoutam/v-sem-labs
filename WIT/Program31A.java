// Program for single level inheritance
class A {
	void displayA() {
		System.out.println("Parent class");
	}
}
class B extends A {
	void displayB() {
		System.out.println("Child class");
	}
}
public class Program31A {
	public static void main(String[] args) { 
		B b = new B();
		b.displayB();
		b.displayA();

	}
}