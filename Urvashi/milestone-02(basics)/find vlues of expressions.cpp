#include <iostream>
using namespace std;
int main()
{
int x=2, y=5 , z=0 ;
(x==2)?cout<<"true\n":cout<<"false\n";
(x!=5)?cout<<"true\n":cout<<"false\n";
((x!=5 ) && (y>=5))?cout<<"true\n":cout<<"false\n";
((z!=0 )|| x==2)?cout<<"true\n":cout<<"false\n";
(!(y<10))?cout<<"true\n":cout<<"false\n";
}
