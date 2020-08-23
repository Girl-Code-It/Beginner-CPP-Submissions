

#include <iostream>
#include <string>
using namespace std;
int main() {
    int N,M,i,j,k;      
    cin>>N;
    int A[N];
    for(i=0;i<N;i++){
    cin>>A[i];}
    cin>>M;
    int C[M];
    for(j=0;j<M;j++){
    cin>>C[j];}
     for(i=0;i<100;i++){   
    int count =0;
    for(j=0;j<N;j++){  
        for(k=0;k<M;k++){
            if(i==C[k]-A[j]){
            count++;
            break;
           }
        }
    }

    if(count==N)
        cout<<i<<" ";  
     }
    return 0;
}
