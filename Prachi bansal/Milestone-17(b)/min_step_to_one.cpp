#include<iostream>
int count(int n,int i){
	if(n==1){
		return i;
	}else{
		if(n%2==0){
			n=n/2;
			i++;
			return count(n,i);
		}else if(n%3==0){
			n/=3;
			i++;
			return count(n,i);
		}else{
			n=n-1;
			i++;
			return count(n,i);
		}	
	}
}
int main(){
	int n;
	std::cout<<"Enter the number"<<std::endl;
	std::cin>>n;
	int l=count(n,0);
	std::cout<<"Count: "<<l;
	return 0;
}
