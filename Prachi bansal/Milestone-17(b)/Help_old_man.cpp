#include <iostream>
void toh(int,int,int,int,int,int &);
int main() {
    int t,n,x;
    std::cin>>t;
    for(int j=0;j<t;j++){
        std::cin>>n>>x;   
        int i=0;
        toh(1,3,2,n,x,i);
    }
	return 0;
}
void toh(int s,int d,int h,int n,int x,int &i){
    if(n==1){
    	i++;
    	
        	std::cout<<s<<" "<<d<<" step "<<i<<std::endl;
        	return ;
		
    }
    toh(s,h,d,n-1,x,i);
    i++;
    
    	std::cout<<s<<" "<<d<<" step "<<i<<std::endl;	
	
    toh(h,d,s,n-1,x,i);
}
