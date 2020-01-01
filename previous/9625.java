import java.util.Scanner;
public class Main {
	static int a=1, b=0; 
	public static void main(String[] args) {
		int k = new Scanner(System.in).nextInt();
		while(k-- >0)
			change();
		System.out.println(a+ " "+b);
	}
	static void change() {
		int changedB = b+a;
		int changedA = a-a +b;
		
		a = changedA;
		b = changedB;
	}

}
