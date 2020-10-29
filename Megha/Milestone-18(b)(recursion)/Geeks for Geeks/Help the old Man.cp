#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n,int from_rod,int to_rod,int helping_rod,int &N){
    if(n==0){
        return;
    }
    towerOfHanoi(n-1,from_rod,helping_rod,to_rod,N);
    N--;
    if(N==0){
        cout<<from_rod<<" "<<to_rod<<endl;
    }
    towerOfHanoi(n-1,helping_rod,to_rod,from_rod,N);
}
int main() {
    int t;  //number of test cases
    cin>>t;
    while(t--){
	int n,N;  //number of plates and the move no.
	cin>>n>>N;
    towerOfHanoi(n,1,3,2,N);
    }
	return 0;
}
