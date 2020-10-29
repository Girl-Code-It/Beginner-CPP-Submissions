package twoDarray;

import java.util.*;

public class findthestring {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc =new Scanner(System.in);
		int t=sc.nextInt();
		for(int i = 0 ; i < t ; i++){
			int n= sc.nextInt();
			int m= sc.nextInt();
			StringBuilder[] str= new StringBuilder[n];
			//System.out.println(n +" "+ m);
			for( int j = 0 ; j < n ; j++) { 
				str[j] = new StringBuilder();
			}
			for( int j = 0 ; j < n ; j++) { 
				
				str[j].append(sc.next());
			
			}
						
			
			String s;
			s = sc. next();
			//System.out.println(s);
			
			int arr[][]= new int[n][m];
			int indString=0;
			boolean char_not_found=false;
			for( int j = 0 ; j < s.length() && char_not_found== false ; j++){
				if(j % n == 0)
					indString=0;
				String current_char=String.valueOf(s.charAt(j));
				//System.out.println(current_char);
				if(str[indString].indexOf(current_char) != -1 ){
					str[indString].deleteCharAt(str[indString].indexOf(current_char));
					indString++;
				}
				else
					{
						char_not_found=true;
						System.out.println("No");
					
					}
				
			}	
			if(char_not_found == false)
				System.out.println("Yes");
			
			}
			}
			
}
