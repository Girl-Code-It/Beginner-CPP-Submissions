#include<iostream>
using namespace std;
int main(){
int i ,n,first=0,second=1,next;	
cout<<"Enter the number of terms to be printed in the fabonacci series"<<endl;
cin>>n;
cout<<"\n Fabonacci Series :"<<endl;
for(i=0;i<=n;i++)
{
cout<<first<<endl;
next=first+second;
first=second;
second=next;
}

}
