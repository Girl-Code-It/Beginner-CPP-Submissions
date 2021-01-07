#include <iostream>
#include<queue>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n+1];
	    queue<int> q;
	    
	    for(int i=1;i<=n;i++){
	        q.push(i);
	    }
	    
	    for(int i=1;i<=n;i++){
	        int j=i;
	        while(j--){
	            int ans = q.front();
	            q.pop();
	            q.push(ans);
	        }
	        arr[q.front()] = i;
	        q.pop();
	    }
	    
	    for(int i=1;i<=n;i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	
	return 0;
}
