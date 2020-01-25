//Way too long words(java)
import java.util.*;
public class a2oj2{
	public static void main(String args[]){
		Scanner z=new Scanner(System.in);
		int n,i,l=0,j;
		
		n=z.nextInt();
		String sa[]=new String[n+1];
		for(i=0;i<n+1;i++){
		sa[i]=z.nextLine();	
		}       
		for(i=0;i<n+1;i++){
		l=sa[i].length();
		if(l<=10)
			System.out.println(sa[i]);
		else{
			System.out.print(sa[i].charAt(0));
			System.out.print(l-2);
			System.out.print(sa[i].charAt(l-1)+"\n");
		}
		
		}	
		
		}
	}
