#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;

    while(t--){
     int n;
    cin>>n;
   int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }

        int count = 1,j;
        for(int i=0;i<n;i++){
            count = 1,j=i-1;
        while(j>=0 && arr[j]<=arr[i]){
            count++;
            j--;
            }
        cout<<count<<" ";
        }
        cout<<endl;
    }
}
