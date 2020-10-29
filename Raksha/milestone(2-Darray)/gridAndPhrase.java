package twoDarray;

import java.util.Scanner;

public class gridAndPhrase {
	
	//NOT_CORRECT_SOLUTION
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc =new Scanner(System.in);
		int n = sc.nextInt();
		int m = sc.nextInt();
		int count = 0;
		String[] arr = new String[n];
		for(int i = 0 ; i < n ; i++){
			arr[i] = sc.next(); 
			if(arr[i].contains("saba"))
				count++;
		}
		//System.out.println(count);
		for(int i = 0 ; i < n ; i++) {
			
			if(arr[i].indexOf('s') != -1 && (i+3) < m)
			{
				if(arr[i+1].indexOf('a') -arr[i].indexOf('s') == 1 )
				{
					if(arr[i+2].indexOf('b') -arr[i+1].indexOf('a') == 1 ) 
					{
						if(arr[i+3].indexOf('a') -arr[i+2].indexOf('a') == 1)
							count++;
						else continue;
					}
					else continue;
				}
				else continue;
			}
				
				
		}
		for(int i =n-1 ; i >=0 ; i--) {
			
			if(arr[i].indexOf('s') != -1 && (arr[i].indexOf('s') + 3) < m) {
				System.out.print(arr[i].charAt(arr[i].indexOf('s')));
				if(arr[i-1].indexOf('a') -arr[i].indexOf('s') == 1 ) {
					
					if(arr[i-2].indexOf('b') -arr[i-1].indexOf('a') == 1  ) {
						if(arr[i-3].indexOf('a') -arr[i-2].indexOf('a') == 1 )
							count++;
						else continue;
					}
					else continue;
				}
				else continue;
			}				
		}
		System.out.println(count);
			
	}

}
