import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class Main {

	public static void main(String[] args)throws IOException{
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int[][] d = new int[15][15];
		for(int i=1; i<15; i++) d[0][i] = i;
		for(int i=1; i<15; i++) {
			for(int j=1;j<15;j++)
				d[i][j] = d[i-1][j] + d[i][j-1];
		}
		int t = Integer.parseInt(in.readLine());
		String r = "";
		for(int i=0; i<t;i++) {
			int k = Integer.parseInt(in.readLine());
			int n = Integer.parseInt(in.readLine());
			r += d[k][n] + "\n";
		}
		System.out.println(r);
	}


}
