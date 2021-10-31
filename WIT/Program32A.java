
public class Program32A {
	public static int sum(int a, int b) {
		return a + b;
	}
	public static int sum(int a, int b, int c) {
		return a + b + c;
	}
	public static int sum(int a, int b, int c, int d) {
		return a + b + c + d;
	}
	public static void main(String[] args) {
		System.out.println("The sum of 2 and 3 is " + sum(2, 3));
		System.out.println("The sum of 2 and 3 and 4 is " + sum(2, 3, 4));
		System.out.println("The sum of 2 and 3 and 4 and 5 is " + sum(2, 3, 4, 5));
	}
}
