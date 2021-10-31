// program to demonstrate multilevel inheritance
class A {
	void displayA() {
		System.out.println("A");
	}
}
class B extends A {
	void displayB() {
		System.out.println("B");
	}
}
class C extends B {
	void displayC() {
		System.out.println("C");
	}
}
public class Program31B {
	public static void main(String[] args) {
		C c = new C();
		c.displayA();
		c.displayB();
		c.displayC();
		
	}
}