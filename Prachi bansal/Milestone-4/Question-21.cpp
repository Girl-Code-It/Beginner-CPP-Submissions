#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int x,y,ans;
	cout<<"Enter base: ";
	cin>>x;
	cout<<"\nEnter the power: ";
	cin>>y;
	ans=pow(x,y);
	cout<<"\n"<<x<<"^"<<y<<" = "<<ans;
	return 0;
}
