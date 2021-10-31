
interface A {
	void displayA();
}
interface B {
	void displayB();
}
class Program36 implements A,B {
	public void displayA() {
		System.out.println("displayA");
	}
	public void displayB() {
		System.out.println("displayB");
	}
	public static void main(String[] args) {
		Program36 p = new Program36();
		p.displayA();
		p.displayB();
	}
}

