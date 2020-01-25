//Petya and Strings(java)
import java.util.*;
public class a2oj4{
	public static void main(String[] args) {
		Scanner z=new Scanner(System.in);
		String s1=z.nextLine();
		String s2=z.nextLine();
		int i,f=0;
		char a,b,x,y;
		int l=s1.length();
		for(i=0;i<l;i++){
			x=s1.charAt(i);
			y=s2.charAt(i);
			
			if(x==y)
				continue;
			else
			{
				a=Character.toLowerCase(s1.charAt(i));
                b=Character.toLowerCase(s2.charAt(i));
                
                if(a>b){
                	f=1;
                	break;
                }
                else if(b>a){
                	f=-1;
                	break;
                }
                else{
                	f=0;
                	continue;
                }
                
 
			}
		}System.out.println(f);
 
	}
 
}