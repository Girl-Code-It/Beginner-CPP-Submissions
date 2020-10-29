package twoDarray;

import java.util.Scanner;

public class SaulGoodmansProblem {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	Scanner s = new Scanner(System.in);
	int t= s.nextInt();
	while(t>0) {
		int n= s.nextInt();
		int count=0;
		int[][] arr= new int[n][2];
			for(int i=0 ; i<n ; i++)
			{
				arr[i][0]=s.nextInt();
				arr[i][1]=s.nextInt();
			}
			for(int j=0 ; j<n-1 ;j++)
				for(int i=j+1 ; i<n ;i++)
				{
					if(arr[j][0]-arr[i][0]== arr[j][1]-arr[i][1])
						count++;
				}
			System.out.println(count);
			t--;
	}
	
	}
	
	

}
