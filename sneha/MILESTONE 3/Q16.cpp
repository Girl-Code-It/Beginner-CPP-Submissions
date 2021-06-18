#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;int r;int temp;
    cin>>n;  vector <int> a;
    while(n>0)
    {
        r=n%10;
        a.push_back(r);
        n=n/10;
        }

        int j=a.size();


         for (int k=0;k<j;k++)
            cout<<a[k];
     return 0;
}

