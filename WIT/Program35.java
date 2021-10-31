import java.util.*;
class A {
	public static void method(int a, int b) {
		System.out.println("sum: " + (a+b));
	}
}
class B extends A {
	public static void method(int a, int b) {
		System.out.println("difference: " + (a-b));
	}
}
public class Program35 {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int a = scan.nextInt();
		int b = scan.nextInt();
		B b1 = new B();
		b1.method(a, b);
	}
}
