import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		String s = new Scanner(System.in).next();
		int height=10;
		boolean pre = s.charAt(0) == '(';
		for(int i=1; i<s.length();i++) {
			boolean next = s.charAt(i) == '(';
			height += pre^next? 10 : 5;
			pre = next;
		}
		System.out.println(height);
	}

}
