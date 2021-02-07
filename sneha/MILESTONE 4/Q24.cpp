#include <iostream>
#include <vector>
using namespace std;
int main(){
int a,b,i;
vector <int> v;
cin>>a>>b;
for(i=1;i<=a;i++)
{
    if((a%i==0)&&(b%i==0))
        v.push_back(i);
}
int am=v[0];
for(int h=0;h<v.size();h++)
{
 if(v[h]>am)
        am=v[h];
}
cout<<"gcd:"<<am;
}
