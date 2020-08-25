#include<iostream>
using namespace std;

int main()
{ 
    int i,j;
    for(i=0;i<=6;i++){
		for(j=0;j<=6;j++){
			if((i==0 || i==6 || j==0 || j==6) || (i>=2 && i<=4 && j>=2 && j<=4) && (i==2 || i==4 || j==2 || j==4))
			  cout<<"*";
			else
			  cout<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
