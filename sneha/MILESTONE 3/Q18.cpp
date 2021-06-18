#include <iostream>
using namespace std;
int main()
{ int a[10]={0}; int r;
   long int n; cin>>n;
    while(n>0)
       {r=n%10;
        a[r]++;
        n=n/10;
}   for(int i=0;i<10;i++)
     cout<<"frequency of"<<i<<" "<<a[i]<<endl;
}
