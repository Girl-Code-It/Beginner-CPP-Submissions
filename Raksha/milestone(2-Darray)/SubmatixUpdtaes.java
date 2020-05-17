package twoDarray;

import java.util.Scanner;

public class SubmatixUpdtaes {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		int n= s.nextInt();
		int m= s.nextInt();
		int k= s.nextInt();
		int[][] arr =new int[n][m];
		
		for(int i=0 ; i<n ;i++) 
			for(int j=0 ; j<m ; j++)
				arr[i][j]= s.nextInt();
		
//	int[][] update=new [4];
		int[] row = new int[k];
		int[] col = new int[k];
		int[] size = new int[k];
		int[] addNo = new int[k];
		
		for(int i=0 ; i<k ;i++) 
			 { 
				row[i]=s.nextInt()-1;
				//System.out.println(row[i]);
				col[i]=s.nextInt()-1;
				//System.out.println(col[i]);
				size[i]=s.nextInt();
				//System.out.println(size[i]);
				addNo[i]=s.nextInt();
				//System.out.println(addNo[i]);
			}
//		for(int x:row)
//			System.out.println(x+" ");
		for(int i=0 ; i<k ; i++){
		//	System.out.println(i);
			for(int r=row[i] ; r<row[i]+size[i] ; r++)
				for(int c=col[i] ; c<col[i]+size[i] ; c++) {
					arr[r][c]+=addNo[i];
					//System.out.println(r+" "+c);
				}
				
		}
		
		for(int i=0 ; i<n ;i++) {
			for(int j=0 ; j<m ; j++)
				System.out.print(arr[i][j] + " ");
		System.out.println();
		}
			
	
	
	}
}
