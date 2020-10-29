package twoDarray;

import java.util.ArrayList;
import java.util.*;

public class WelcomePlusYourKnowledge {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		int n1= s.nextInt();
		int n2= s.nextInt();
		ArrayList<Integer> plus_size =  new ArrayList<>();
		
		StringBuilder[] arr = new StringBuilder[n1];
		for(int i = 0 ; i<n1 ; i++)
			arr[i]= new StringBuilder();
		
		for(int i = 0 ; i<n1 ; i++)
			arr[i].append(s.next());
		
		int up=0, down=0, left=0, right =0;
		for(int i=1 ; i<n1-1 ; i++)
			for(int j=1; j<n2-1 ;j++) {
				
				if(arr[i].charAt(j)=='R' && arr[i].charAt(j-1)=='R' && arr[i].charAt(j+1)=='R' && arr[i-1].charAt(j)=='R' && arr[i+1].charAt(j)=='R') {
					up=0;
					left=0;
					right=0;
					down=0;
					int x_up=i-1;
					while(x_up>=0 && arr[x_up].charAt(j)=='R' ) {
						up++;
						x_up--;
						if(x_up ==0)
							break;
						//System.out.println(arr[x_up].charAt(j));
					}
					//counting Rs in all direction
					int x_down =i+1;
					while(x_down<n1 && arr[x_down].charAt(j)=='R') {
						down++;
						x_down++;
						if(x_down==n1-1)
							break;
					}
					
					int x_left =j-1;
					while(x_left>=0 && arr[i].charAt(x_left)=='R') {
						left++;
						x_left--;
						if(x_left==0)
							break;

					}
					
					int x_right =j+1;
					while(x_right<n2 &&arr[i].charAt(x_right)=='R') {
						right++;
						x_right++;
						if(x_right==n2-1)
							break;

					}
					 int lowest=0;
				//	 System.out.println(up+ " " +down + " "+ left + " " +right);
					 
					if(up<=left && up<=right && up<=down)
						lowest=up;
					if(down<=left &&  down<=right && down<=up)
						lowest=down;
					if(right<=left && right<=up && right<=down)
						lowest=right;
					if(left<=up && left<=right && left<=down)
						lowest=left;
			//		System.out.println(lowest);
					//changing R to X
					for(int e=0; e<lowest ; e++) {
						arr[i].setCharAt(j-1, 'X');
						arr[i].setCharAt(j+1, 'X');
						arr[i-1].setCharAt(j, 'X');
						arr[i+1].setCharAt(j, 'X');
					}
					plus_size.add(lowest*4 +1);
					
				}
			}
		
		Collections.sort(plus_size); 
		int size= plus_size.size();
		//System.out.println(plus_size);	
		if(plus_size.isEmpty())
			System.out.println(1);
		else {
			if(plus_size.size()==1)
				System.out.println(plus_size.get(0));
			else
				System.out.println(plus_size.get(size-1)*plus_size.get(size-2));
		}	
		}

}
