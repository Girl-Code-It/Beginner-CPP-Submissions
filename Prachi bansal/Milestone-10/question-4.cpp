#include<iostream>
using namespace std;
int max(int a, int b, int c){
	if(a>b){
		if(a>c){
			return a;
		}else{
			return c;
		}
	} else{
		if(b>c){
			return b;
		}else{
			return c; 
		}
	}
}

int min(int a, int b, int c){
	if(a>b){
		if(c>a){
			return b;
		}else{
			return c;
		}
	}else{
		if(b>c){
			return a;
		}else{
			return a;
		}
	}
}
int main(){
	int x,y,z;
	cout<<"Enter three numbers: ";
	cin>>x>>y>>z;
	cout<<"\nMinimum is: "<<min(x,y,z);
	cout<<"\nMaximum is: "<<max(x,y,z);
	return 0;
}
