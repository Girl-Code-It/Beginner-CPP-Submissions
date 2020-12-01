#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,sum=0;
        cin>>n>>k;
        int arr[n+1];
        
        for(int i=0;i<n;i++){
              cin>>arr[i];  
            }
            
        while(k--){
            int max = 0,index=0;
            for(int i=0;i<n;i++){
              if(arr[i] > max){
                  max = arr[i];
                  index=i;
              }  
            }
            arr[index] /= 2;
            sum += max;
        }
        
        cout<<sum<<endl;
    }
    
    return 0;
}
