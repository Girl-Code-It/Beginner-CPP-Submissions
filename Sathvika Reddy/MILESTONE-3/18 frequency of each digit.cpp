#include<iostream>
using namespace std;
int main(){
int n,i,ctr,r,j;
cout<<"Enter any number\n";
cin>>n;
for(i=0;i<10;i++){
cout<<"The frequency of "<<i<<"is = "<<endl;
ctr=0;
for(j=n;j>0;j=j/10){
r=j%10;
if(r==i){
ctr++;
	}
}cout<<ctr<<endl;
}
}
