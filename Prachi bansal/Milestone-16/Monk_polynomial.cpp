#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long a,b,c,k,n;
	double x,y;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c>>k;
		c=c-k;
		x= ((-b) + sqrt(b*b-(4*a*c)))/(2*a);
		y= ((-b) - sqrt(b*b-(4*a*c)))/(2*a);
		if(x>=0 && y>=0){
			if(x<y){
				cout<<ceil(x)<<endl;
			}else{
				cout<<ceil(y)<<endl;
			}
		}else if(x<0 && y<0){
			cout<<0<<endl;
		}else{
			if(x<0){
				cout<<ceil(y)<<endl;
			}else if(y<0){
				cout<<ceil(x)<<endl;
			}
		}
	}
	return 0;	
}
