#include<iostream>
void powerSet(int a[], int index,int curr,int n){  
    if (index>n-1) { 
        std::cout<<curr<<" ";
        return ; 
    } 
    powerSet(a, index + 1, curr + a[index],n); 
    powerSet(a, index + 1, curr,n); 
} 
int main(){
	int n;
	std::cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		std::cin>>a[i];
	}
	powerSet(a,0,0,n);
	return 0;
}
