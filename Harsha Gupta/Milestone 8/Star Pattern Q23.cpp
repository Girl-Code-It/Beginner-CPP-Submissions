#include<iostream>
using namespace std;

int main()
{ 
    int i,j;
    for(i=0;i<=6;i++){
    	int k=1;
		for(j=0;j<i;j++){
			cout<<k;
			(j%2==0)?k--:k++;
		}
		cout<<"\n";
	}
	return 0;
}
