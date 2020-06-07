#include <iostream>
using namespace std;
int main()
{
    int i;

	cout<<"\n The ASCII characters with their values:"<<endl ;
    for (i=0; i<=255; i++)
    {
        cout<<i<<" = "<<char(i)<<endl;
    }
}
