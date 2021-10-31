// demonstration of Scanner class

import java.util.*;

public class Program33 {
	public static void main(String[] args) {

		Scanner input = new Scanner(System.in);
		System.out.print("Enter a number: ");
		int number = input.nextInt();
		System.out.println("You entered " + number);
		String name = input.next();
		System.out.println("You entered " + name);
		input.close();

	}
}
