#include<bits/stdc++.h>
using namespace std;

void printPreorder(int *a , int start , int end , int n){
    
    if(start > end || end >= n || start < 0 )
        return ;

    int mid = floor((int)(start+end)/2.0) ;
    cout << a[mid] << " " ;
    printPreorder(a,start,mid-1,n) ;
    printPreorder(a,mid+1,end,n) ;
}

int main()
 {
	int t ;
	cin >> t ;
	while(t--){
	    int n , i ;
	    cin >> n ;
	    int a[n] ;
	    for(i=0;i<n;i++){
	        cin >> a[i] ;
	    }
	    printPreorder(a , 0 , n-1 , n) ;
	    cout << "\n" ;
	}
	
	return 0;
}
