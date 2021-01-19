#include<iostream>

int main(){
	int a = 0;

	std::cout<<"Enter the no.: ";
	std::cin>>a;

	if(a%2==0){
		std::cout<<"\n"<<a<<" is a even no.\n";
	}
	else{
		std::cout<<a<<" is a odd no.\n";
	};
};


