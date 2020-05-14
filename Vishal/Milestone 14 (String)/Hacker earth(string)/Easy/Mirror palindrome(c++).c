#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int f = 0,r = 0;
        string a;
        cin>>a;
        for(long long i=0; a[i] != '\0'; i++)
        {
            if(a[i] != a[a.size() - 1 - i])
            {
                f = 1;//No. is not palindrome
                break;
            }
        }
        if(f == 1)
        cout<<"NO"<<endl;
        else
        {
            for(long long i=0; a[i] != '\0'; i++)
            {
                if(a[i] != '1' && a[i] != '0' && a[i] != '8')
                {
                    r = 1;//No. is not 1,0,8.
                    break;
                }
            }
            if(r == 1)
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
        }
    }
    return 0;

}