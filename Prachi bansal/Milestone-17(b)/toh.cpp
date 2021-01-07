#include<iostream>
int divideNumber(int n,int i,int &sum,int j){
	if(n%i==0){
		sum+=i
		ar[j]=i;
		divideNumber(n,i+1,&sum,j+1)
	}else{
		divideNumber()
	}
}
int main(){
	int n;
	std::cin>>n;
	divideNumber(n,2,0,0);
	return 0;
}
