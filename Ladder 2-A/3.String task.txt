//String task(java)
import java.util.*;
public class a2oj3{
	public static void main(String args[]){
		Scanner z=new Scanner(System.in);
		String s=z.nextLine();
		char t,sa[]=s.toCharArray();
		int i;
		for(i=0;i<sa.length;i++){
			t=sa[i];
			if(t=='a'||t=='e'||t=='i'||t=='o'||t=='u'||t=='A'||t=='E'||t=='I'||t=='O'||t=='U'||t=='y'||t=='Y')
				continue;
			else
				System.out.print("."+Character.toLowerCase(sa[i]));
		}
	}
}