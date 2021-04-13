/*Given an array arr[] of n elements in the following format 
{a1, a2, a3, a4, ….., an/2, b1, b2, b3, b4, …., bn/2}, 
the task is shuffle the array to {a1, b1, a2, b2, a3, b3, ……, an/2, bn/2} 
without using extra space. */
void shuffle(int a[],int start,int end)
	{
	    if (start >= end) 
	    { 
        return; 
        } 
  
        // If only 2 element
        if (end-start == 1) 
            return; 
      
        int mid = (start + end) / 2; 
        // using temp for swapping first half of second array 
         // and mmid is use for swapping second half for first array 
        int temp = mid + 1; 
        int mmid = (start + mid) / 2; 
      
        // Swapping the element 
        for (int i = mmid + 1; i <= mid; i++) 
            swap(a[i], a[temp++]); 
       
        shuffle(a, start, mid); 
        shuffle(a, mid + 1, end); 
	}
	
	void shuffleArray(int a[],int n)
	{
	    // Your code goes here
	    int start=0;
	    int end= n-1;
	    
	    shuffle(a,start,end);
    	  
	}
		
