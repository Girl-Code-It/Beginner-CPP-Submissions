#include <iostream>
using namespace std;
int main()
{
  int age;
  char s;
  char m;
  cin>>age>>s>>m;
  if(s=='f'||s=='F')
        cout<<"urban areas";
  else{
    if(age>=20&&age<=40)
    cout<<"anywhere";
    else
        if(age>=40&&age<=60)
     cout<<"urban areas";
    else cout<<"error";}
    return 0;
}
