//Watermelon(java)
import java.util.*;
public class watermelon {
 
	public static void main(String[] args) {
		Scanner z=new Scanner(System.in);
		int n=z.nextInt();
		if(n<=2)
			System.out.println("NO");
		else if(n%2==0)
			System.out.print("YES");
		else
			System.out.print("NO");
	}
 
}