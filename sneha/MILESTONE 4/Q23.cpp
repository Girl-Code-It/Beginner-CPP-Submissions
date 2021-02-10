#include <iostream>
using namespace std;
int main()
{
    int n,i,p=1;
    cout<<"enter number:";cin>>n;
    for(i=1;i<n;i++){
        p=p*i;
    }
    cout<<p;
}
