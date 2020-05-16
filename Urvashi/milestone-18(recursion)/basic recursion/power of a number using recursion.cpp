#include<bits/stdc++.h>
using namespace std;
long int power(int base,int pow)
{
if(pow==0)
return 1;
else 
return base*(power(base,pow-1));
}
int main()
{
int base,pow;
cin>>base>>pow;
cout<<power(base,pow);
}
