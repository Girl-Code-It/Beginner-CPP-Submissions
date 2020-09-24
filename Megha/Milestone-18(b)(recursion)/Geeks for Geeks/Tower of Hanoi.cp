#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n,int from_rod,int to_rod,int helping_rod,int &count){
    if(n==1){
        cout<<"move disk 1 from rod "<<from_rod<<" to "<<to_rod<<endl;
        count++;    
        return;
    }
    towerOfHanoi(n-1,from_rod,helping_rod,to_rod,count);
    cout<<"move disk "<<n<<" from rod "<<from_rod<<" to rod "<<to_rod<<endl;
    count++;
    towerOfHanoi(n-1,helping_rod,to_rod,from_rod,count);
}
int main() {
    int t;  //number of test cases
    cin>>t;
    while(t--){
	int n,count=0;  //number of rods
	cin>>n;
    towerOfHanoi(n,1,3,2,count);
    cout<<count<<endl;
    }
	return 0;
}
