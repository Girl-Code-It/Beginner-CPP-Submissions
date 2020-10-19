void shuffleArray(int *a,int n)
	{
	    static int i=0;
	    if(i==n/2 && n%2==0){
	        return;
	    }
	    if(i==(n-1)/2 && n%2==1){
	        cout<<a[n-1];
	        return;
	    }
	    cout<<a[i]<<" ";
	    
	    if(n%2==0)
	        cout<<a[n/2+i]<<" ";
	    else
	        cout<<a[(n-1)/2+i]<<" ";
	  i++;
	    shuffleArray(a,n);
	     
	}
