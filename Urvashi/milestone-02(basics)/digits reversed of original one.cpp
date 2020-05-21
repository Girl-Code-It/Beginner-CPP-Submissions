#include<iostream>
using namespace std;
int main()
{
int n, reversednumber =0, rem ;
cout<<"enter an integer ";
cin>>n;
while (n!=0)
{  
   rem = n%10;
   reversednumber= reversednumber*10 +rem;
   n /=10;
}
cout<<"reversed number="<< reversednumber;		
}
