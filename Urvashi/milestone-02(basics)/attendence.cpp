#include<iostream>
using namespace std;
int main()
{
float a,  b;
cout<<"enter no of classes held and attended"<<endl;
cin >> a>> b;
((b/a)*100 <75)?cout<<"% of classes attended is  "<<((b/a)*100)<<" u will not be able to sit in exam  ":
cout<<" % of classes attended is  "<<((b/a)*100)<<"  u will be able to sit in exam  ";		
}
