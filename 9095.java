import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws IOException{
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(in.readLine());
		int[] result = new int[t];
		for(int i=0; i<t; i++) result[i] = cal(Integer.parseInt(in.readLine()));
		for(int i=0; i<t; i++) System.out.println(result[i]);
	}
	
	static int cal(int n) {
		switch(n) {
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 4;
		default:
			return cal(n-1) + cal(n-2) + cal(n-3);
		}
	}

}
