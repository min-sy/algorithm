import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		String result = "";
		int t = s.nextInt();
		while(t-- > 0) {
			int n = s.nextInt();
			result += Calculate.getRobotWalking(n) + " " +Calculate.getFibo(n) +"\n";
		}
		System.out.println(result);

	}
}

class Calculate{
	private static int[] f = new int[41];
	private static int[] w = new int[41];
	
	static {
		f[0] = 0; f[1] = 1;
		w[0] = 1; w[1] = 0;
	}
	public static  int getFibo(int n) {
		if(n == 0) return 0;
		if(f[n] != 0) return f[n];
		f[n] = getFibo(n-1) + getFibo(n-2);
		return f[n];
	}
	public static int getRobotWalking(int n) {
		if(w[n] != 0 || n==1) return w[n];
		w[n] = getRobotWalking(n-1) + getRobotWalking(n-2);
		return w[n];
	}
}
