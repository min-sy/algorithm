import java.util.*;
public class Main {
	static int current  ; // 0 - R/ 1 - U /2 - L /3 - D 
	static int x, y, m;
	public static void main(String[] args) {
		
		
		Scanner s = new Scanner(System.in);
		StringTokenizer mn =  new StringTokenizer(s.nextLine());
		m = Integer.parseInt(mn.nextToken());
		int n = Integer.parseInt(mn.nextToken());
		String[] commands = new String[n];
		for(int i=0; i<n; i++) {
			commands[i] = s.nextLine();
			switch(commands[i].substring(0, 4)) {
			case "MOVE":
				move(Integer.parseInt(commands[i].substring(5)));
				break;
			case "TURN":
				turn(commands[i].substring(5));
				break;
			}
		}
		System.out.println(x + " "+y);
	}
	static void turn(String direction) {
		switch(direction) {
		case "0":
			if(++current > 3)
				current = 0;
			break;
		case "1":
			if(--current <0)
				current = 3;
			break;
		}
	}
	static void move(int n) {
		switch(current) {
		case 0 :
			x += n;
			if(x>m) {
				System.out.println("-1");
				System.exit(0);
			}
			break;
		case 1:
			y += n;
			if(y>m) {
				System.out.println("-1");
				System.exit(0);
			}
			break;
		case 2:
			x -=n;
			if(x<0) {
				System.out.println("-1");
				System.exit(0);
			}
			break;
		case 3:
			y -=n;
			if(y<0) {
				System.out.println("-1");
				System.exit(0);
			}
			break;
		}
	}

}
