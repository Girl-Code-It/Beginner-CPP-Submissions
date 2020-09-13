#include<iostream>
using namespace std;
int main(){
	int x,y,i,max,lcm;
	cout<<"Enter 1st no. for LCM: ";
	cin>>x;
	cout<<"\nEnter 2nd no. for LCM: ";
	cin>>y;
	max=(x>y?x:y);
	i=max;
	while(1){
		if(i%x==0 && i%y==0){
			lcm=i;
			break;
		}
		i+=max;
	}
	cout<<"\nLCM of "<<x<<" & "<<y<<" is "<<lcm;
	return 0;
}
