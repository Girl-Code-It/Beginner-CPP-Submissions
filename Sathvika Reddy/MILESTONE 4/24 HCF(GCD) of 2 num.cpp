#include<iostream>
using namespace std;
int main(){
int n1,n2;
cout<<"HCF of two numbers\n" ;
cout<<"Enter two numbers\n";
cin>>n1>>n2;
while(n1!=n2){
if(n1>n2)
n1=n1-n2;
else
n2=n2-n1;
}
cout<<"HCF = "<<n1;
}
