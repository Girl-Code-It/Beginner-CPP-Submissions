package twoDarray;

import java.util.Scanner;

public class pattern {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner s = new Scanner(System.in);
		int n= s.nextInt();
		int oe=0;
		for(int i=0; i<n ;i++)
		{
			for(int j=0 ; j<n-i ;j++) {
				if(oe%2==0)
				System.out.print(1);
				else System.out.print(0);
			}
			oe++;
			System.out.println();
		}
	}

}
