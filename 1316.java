import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws IOException{
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		String[] s = new String[n];
		int count=0;
		for(int i=0; i<n; i++) {
			s[i] = in.readLine();
			boolean[] check = new boolean[s[i].length()]; 
			char ch = s[i].charAt(0);
			int temp =0; int next=0;
			AA:
			while(true) {
				int num=0;
				BB:
				while(true) {
					int t = temp;
					check[temp]=true;
					temp = s[i].indexOf(ch, ++num);
					if(temp == -1) break;
					if(temp - t >1) break AA;
				}
				next = stil(check);
				if(next == -1) break;
				ch = s[i].charAt(next);
				temp = next;
			}
			if(next == -1) count++;
		}
		
		System.out.println(count);
	}
	static int stil(boolean[] check) {
		for(int i=0; i<check.length;i++) {
			if(!check[i]) return i;
		}
		return -1;
	}

}
