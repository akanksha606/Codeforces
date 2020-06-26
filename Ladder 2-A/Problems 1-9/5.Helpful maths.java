//Helpful maths(java)
import java.util.*;
public class Main{
	public static void main(String[] args) {
		Scanner z=new Scanner(System.in);
		String s=z.nextLine();
		int l=s.length();
		int i,x=0;
		int arr[]=new int[l/2+1];
		for(i=0;i<l;i++){
		    if(s.charAt(i)!='+'){
            arr[x]=Integer.parseInt(String.valueOf(s.charAt(i)));
		        x++;
		    }
		}
        Arrays.sort(arr);
        for(i=0;i<l/2;i++){
        	System.out.print(arr[i]+"+");
        }
        System.out.print(arr[l/2]);
	}
}