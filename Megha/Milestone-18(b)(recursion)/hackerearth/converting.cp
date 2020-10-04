#include<bits/stdc++.h>
using namespace std;
//this function will run till a will become equal to b
int convert(int a,int b,int c){      
	if(a>=b){     //if a is greater than or equal to b
		return (a-b)/2 + (a-b)%2;     //eg (11-6)/2 + (11-6)%2 = 2+1=3 like a-2*n=b => (a-b)/2=ns
	}
	if(b%c==0){      
		return 1 + convert(a,b/c,c);
	}
	else{
		int x=((b/c)+1)*c;
		return (x-b)/2 + (x-b)%2 + convert(a,x,c);
	}
}	

int main(){
	long long int t;   //number of test cases
	cin>>t;
	while(t--){
		int a,b,c;   //three space separated integer
		cin>>a>>b>>c;
		cout<<convert(a,b,c)<<endl;
	}
}

/*input 2
3 10 2
11 6 2
output
3
3
*/
