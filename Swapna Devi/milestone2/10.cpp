#include<iostream>
using namespace  std;
int main()
{
    int n,count=0;
cout<<"enter number";
cin>>n;
while(n!=0){
   count++;
    n=n/10;
   
}
cout<<"total no of digits"<<count;
} 