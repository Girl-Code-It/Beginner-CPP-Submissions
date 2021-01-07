#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int i){
	int flag=0;
	for(int j=2;j<=i/2;j++){
		if(i%j==0){
			flag=1;
			return false;
		}
	}
	if(flag!=1){
		return true;	
	}
}
int main(){
	long long a,b,c,d,n,j=0,i,k=0;
	cin>>n;
	long long x=cbrt(n)+1;
	long long a1[x],b1[x];
	cout<<x<<endl;
	for(i=1;i<=x;i++){
		if(i%2!=0){
			a1[j]=i;
			j++;
		}
		if(i!=1 && isPrime(i)){
			b1[k]=i;
			k++;
		}
	}
	int start=0,end=j-1,mid;
	while(start<=end){
		mid=start+((end-start)/2);
		a=a1[mid];
		for(int i=0;i<k;i++){
			if(b1[i]>a){
				b=b1[i];
				c=b1[i];
				d=b1[i];
			}
		}
	}
	return 0;
}
