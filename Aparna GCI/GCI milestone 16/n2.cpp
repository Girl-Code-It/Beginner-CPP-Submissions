#include<iostream>
using namespace std;
int main()
{
    int t,i,f,j;
    char a[20];
    cout<<"Enter no. of test cases : "<<endl;
    cin>>t;
    for(i=0;i<t;i++)
    {
        f=0;
        cout<<"Enter the string : "<<endl;
        cin>>a;
        for(j=0;a[j]!='\0';j++)
        {
            if(a[j]=='a'||a[j]=='e'||a[j]=='i'||a[j]=='o'||a[j]=='u'||a[j]=='A'||a[j]=='E'||a[j]=='I'||a[j]=='O'||a[j]=='U')
            {
                f++;
            }
        }
        cout<<f<<endl;
    }
    return 0;
}
