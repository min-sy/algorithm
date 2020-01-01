import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;

public class Main {

	public static void main(String[] args) throws IOException{
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String input = in.readLine();
		input = input.replace("()", "/");
		char[] str = input.toCharArray();
		LinkedList<Character> s = new LinkedList<Character>();
		int blocks =0; int left=0; int num=0;
		for(int i=0; i<str.length;i++) {
			switch(str[i]) {
			case '(':
				s.addLast(str[i]);
				blocks++;
				left++;
				break;
			case '/':
				num += blocks + (left - blocks);
				left = blocks;
				break;
			case ')':
				s.removeLast();
				blocks--;
				
			}
		}
		if(left != 0) num +=left;
		System.out.println(num);
		
	}

}
