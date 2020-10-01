#include<iostream>
using namespace std;
int main(){
	int x;
	
	for(x=0;x<=255;x++){
		char ch = x;
		cout<<"\nASCII value of "<<ch<<" is "<<x;
	}
	return 0;
}
