#include <iostream>
using namespace std;
int main(){
 int n,i;int p=1;
cout<<"enter number:";cin>>n;
cout<<"enter power:";cin>>i;
while(i>0)
{
    p=p*n;
    i--;
}
cout<<"ans:"<<p;

return 0;

}
