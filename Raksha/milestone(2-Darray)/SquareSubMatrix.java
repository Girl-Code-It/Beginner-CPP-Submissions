package twoDarray;

import java.util.Scanner;

public class SquareSubMatrix {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		int t= s.nextInt();
		while(t>0) {
			int n= s.nextInt();
			int m= s.nextInt();
			int[][] arr =new int[n][m];
			
			for(int i=0 ; i<n ; i++)
				for(int j=0 ; j<m ; j++)
					arr[i][j]= s.nextInt();
			
			int[][] a =new int[n][m];
			
			//copying first row
			for(int i=0 ; i<m ; i++)
				a[0][i]=arr[0][i];

			//copying first col
			for(int i=0 ; i<n ; i++)
				a[i][0]=arr[i][0];
			
			//constructing a
			for(int i=1 ;i<n ;i++)
				for(int j=1 ; j<m ; j++) {
					if(arr[i][j]==1) 
						a[i][j] = Math.min(a[i-1][j], Math.min(a[i][j-1],a[i-1][j-1])) + 1;
					else
						a[i][j]=0;
				}
			
			int max=a[0][0];
			
			for(int i=0 ; i<n ; i++)
				for(int j=0 ; j<m ; j++)
					if(max<a[i][j])
						max=a[i][j];
			
			System.out.println(max*max);
						
			
			t--;
		}
	}

}
