import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args)throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer tk = new StringTokenizer(in.readLine());
		int e = Integer.parseInt(tk.nextToken());
		int s = Integer.parseInt(tk.nextToken());
		int m = Integer.parseInt(tk.nextToken());
		int year=1;
		while(true) {
			if((year-e)%15 == 0 &&(year-s)%28 ==0 && (year-m)%19==0)break;
			year++;
		}
		System.out.println(year);
	}

}
