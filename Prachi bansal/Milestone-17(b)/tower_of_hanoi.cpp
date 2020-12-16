#include<iostream>
void tower(char s,char d,char h,int n){
	if(n==1){
		std::cout<<"\nMoving "<<n<<" from "<<s<<" to "<<d;
		return ;
	}
	tower(s,h,d,n-1);
	std::cout<<"\nMoving "<<n<<" from "<<s<<" to "<<d;
	tower(h,d,s,n-1);
}
int main(){
	int n;
	std::cin>>n;
	tower('A','C','B',n);
	return 0;
}
