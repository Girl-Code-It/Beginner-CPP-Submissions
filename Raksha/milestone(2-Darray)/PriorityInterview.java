package twoDarray;

import java.util.*;

public class PriorityInterview {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		int n= s.nextInt();

		
		int gender =0;
		ArrayList<Integer> f_arr = new ArrayList<>();
		ArrayList<Integer> m_arr = new ArrayList<>();
		for( int i=0 ; i<n ; i++){
			gender=s.nextInt();
			
			if(gender==0)
				f_arr.add(s.nextInt());
			else m_arr.add(s.nextInt());
		}
		
		Collections.sort(f_arr, Collections.reverseOrder());
		Collections.sort(m_arr, Collections.reverseOrder());
		f_arr.addAll(m_arr);
		Integer[] arr = new Integer[n];
		arr= f_arr.toArray(arr);
		for(Integer x : arr)
		System.out.print(x + " ");
		
		
	}

}
