#include<iostream>

int main(){
	int a = 0;

	std::cout<<"Enter the no.: ";
	std::cin>>a;

	if(a>0){
		std::cout<<"\n"<<a<<", It's a Positive no.\n";
	}
	else if(a<0){
		std::cout<<"\n"<<a<<", It's a Negative no.\n";
	}
	else{
		std::cout<<"\n"<<a<<", It's a Zero\n";
	};
	
};


