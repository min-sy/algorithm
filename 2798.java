import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.StringTokenizer;


public class Main {

	public static void main(String[] args)throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer tk = new StringTokenizer(in.readLine());
		int n = Integer.parseInt(tk.nextToken());
		int m = Integer.parseInt(tk.nextToken());
		tk = new StringTokenizer(in.readLine());
		int[] num = new int[n];
		for(int i=0; i<n; i++) num[i] = Integer.parseInt(tk.nextToken());
		ArrayList<Integer> sum = new ArrayList<Integer>();
		ArrayList<int[]> temp = new ArrayList<int[]>();
		for(int i=0; i<n-1; i++) {
			for(int j=i+1; j<n; j++) {
				int[] arr = new int[] {i, j};
				temp.add(arr);
			}
		}
		for(int k=0; k<temp.size(); k++) {
			for(int index=0; index<n; index++) {
				int i = temp.get(k)[0]; int j = temp.get(k)[1];
				if( i == index || j == index) {
					index++;
					continue;
				}
				int p = num[i] + num[j] + num[index];
				if(p<=m)sum.add(p);
			}
		}
		int result = sum.get(0);
		for(int i=1; i<sum.size();i++) {
			if(m - result > m - sum.get(i)) result = sum.get(i);
		}
		System.out.println(result);
		
	}

}
