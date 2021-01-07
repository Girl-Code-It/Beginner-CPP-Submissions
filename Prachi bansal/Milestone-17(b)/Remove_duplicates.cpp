#include<iostream>
void duplicates(std::string a,int i,int j){
	if(a[j]=='\0'){
		a[i]=a[j-1];
		a[j+1]='\0';
		return ;
	}
	if(a[j]==a[j-1]){
		duplicates(a,i,j+1);
		return;
	}else{
		a[i]=a[j-1];
	}	
	duplicates(a,i+1,j+1);	
}
int main(){
	std::string a;
	std::cin>>a;
	char s=duplicates(a,0,1);
	std::cout<<s<<std::endl;
}
