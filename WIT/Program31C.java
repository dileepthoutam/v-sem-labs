class A {
	public void a() {
		System.out.println("A.m()");
	}
}
class B extends A {
	public void b() {
		System.out.println("B.m()");
	}
}
class C extends A {
	public void c() {
		System.out.println("C.m()");
	}
}

public class Program31C {
	public static void main(String[] args) {
		B x = new B();
		x.a();
		x.b();
		C y = new C();
		y.a();
		y.c();
	}
}
