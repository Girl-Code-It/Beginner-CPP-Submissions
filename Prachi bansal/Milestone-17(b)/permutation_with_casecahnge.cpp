#include<iostream>
void subset(std::string a,std::string op){
	if(a==""){
		std::cout<<op<<std::endl;
		return ;
	}
	std::string op1=op;
	std::string op2=op;
	op1.push_back(toupper(a[0]));
	op2.push_back(a[0]);
	a.erase(a.begin()+0);
	subset(a,op1);
	subset(a,op2);	
	return ;
}
int main(){
	std::string s;
	std::cin>>s;
	subset(s,"");
	return 0;
}
