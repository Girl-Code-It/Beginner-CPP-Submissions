#include<iostream>
int floor(int a[],int x,int i){
	if(a[i]>x){
		return a[i-1];
	}else if(a[i]==x){
		return a[i];
	}else{
		return floor(a,x,i+1);
	}
}
int main(){
	int n,x;
	std::cout<<"Enter the size: ";
	std::cin>>n;
	int a[n];
	std::cout<<"Enter the elements: "<<std::endl;
	for(int i=0;i<n;i++){
		std::cin>>a[i];
	}
	std::cout<<"enter the number: "<<std::endl;
	std::cin>>x;
	int b=floor(a,x,0);
	std::cout<<b;
	return 0;
}
