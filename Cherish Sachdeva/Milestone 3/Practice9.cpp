#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,num=0,rem,c;
	cin>>n;
	while(n>0){
		c=n%10;
		num=(num*10)+c;
		n/=10;
	}
	while(num!=0){
		rem=num%10;
		if(rem==0){
			cout<<" Zero ";
		}else if(rem==1){
			cout<<" One ";
		}else if(rem==2){
			cout<<" Two ";
		}else if(rem==3){
			cout<<" Three ";
		}else if(rem==4){
			cout<<" Four ";
		}else if(rem==5){
			cout<<" Five ";
		}else if(rem==6){
			cout<<" Six ";
		}else if(rem==7){
			cout<<" Seven ";
		}else if(rem==8){
			cout<<" Eight ";
		}else if(rem==9){
			cout<<" Nine ";
		}
		num/=10;
	}
	return 0;
}
