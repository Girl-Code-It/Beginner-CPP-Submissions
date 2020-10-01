using namespace std;
#include<iostream>
int main()
{
    for(int i=1;i<10;i+=2)
    {
        for(int j=i;j<=9;j+=2)
            cout<<j;
        cout<<endl;
    }
    return 0;
}
