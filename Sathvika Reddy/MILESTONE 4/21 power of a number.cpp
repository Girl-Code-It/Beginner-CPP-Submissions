#include<iostream>
using namespace std;
int main(){
int exponent;
float base,result = 1;
cout<<"Enter base and exponent to find the power of a number\n"	;
cin>>base>>exponent;
cout<<base<<"^"<<exponent;
while(exponent!=0){
result=result*base;
--exponent;
}
cout<<" = "<<result<<endl;
}
