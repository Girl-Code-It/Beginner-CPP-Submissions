#include <iostream>
using namespace std;
int main() {
 int n;
 int sum=0;
 cin>>n;
 int no,i;
 i=1;
 while(i<=n){
cin>>no;
cout<<no;
sum=sum+no;
i=i+1;
 }
 cout<<sum<<endl;
 float avg;
 avg=float(sum)/n;
 cout<<"average is "<<avg<<endl;
}
