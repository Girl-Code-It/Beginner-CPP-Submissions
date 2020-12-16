#include<iostream>
#include<math.h>
using namespace std;
void check(int n,int i){
	if(n==1){
		cout<<"Yes"<<endl;
		return ;
	}else if(n%10==0){
		n/=10;
		i++;
		if(n<10){
			if(n==1 || n==2){
				cout<<"Yes"<<endl;
				return ;
			}else if(pow(2,i)==n){
				cout<<"Yes"<<endl;
				return ;
			}else{
				cout<<"No";
				return ;
			}
		}else{
			check(n,i);
		}
	}else{
		cout<<"No"<<endl;
		return ;
	}
}
int main(){
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		check(n,0);
	}
	return 0;
}
