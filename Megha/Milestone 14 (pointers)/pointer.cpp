

#include <iostream>
using namespace std;
int main() {
   int a = 1025;
   int *p;
   p = &a;
   cout<<sizeof(int)<<endl;   
   cout<<p<<endl<<*p<<endl;
   return 0;
}
