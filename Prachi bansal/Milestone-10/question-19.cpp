#include<iostream>
using namespace std;
int max(int x, int y){
	return (x>y?x:y);
}
int min(int x, int y){
	return (x<y?x:y);
}
main(){
	int a,b;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	cout<<"Maximum number is: "<<max(a,b)<<endl;
	cout<<"Minimum number is: "<<min(a,b);
}
