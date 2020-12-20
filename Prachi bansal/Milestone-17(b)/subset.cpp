#include<iostream>
void subset(std::string a,std::string curr){
	if(a.length()==0){
		std::cout<<curr<<std::endl;
		return ;
	}
	std::string op1=curr;
	std::string op2=curr;
	op1.push_back(a[0]);
	a.erase(a.begin()+0);
	subset(a,op1);
	subset(a,op2);
}
int main(){
	std::string s;
	std::cin>>s;
	subset(s,"");
	return 0;
}
