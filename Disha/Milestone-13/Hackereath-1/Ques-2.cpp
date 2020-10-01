//DNA pride

using namespace std;
#include<iostream>
int main()
{
    long long len[100000],input,i,j,flag;
    string str[1000],a,b;
    cin>>input;
    for(i=0;i<input;i++)
    {
        cin>>len[i];
        cin>>str[i];
    }

    for(i=0;i<input;i++)
    {
        a=str[i];
        b="";
        for(j=0;j<len[i];j++)
        {
            if(a[j]=='A')
                b+='T';
            else if(a[j]=='T')
                b+='A';
            else if(a[j]=='G')
                b+='C';
            else if(a[j]=='C')
                b+='G';
        }
        if(b.length()==len[i])
            cout<<b<<endl;
        else
            cout<<"Error RNA nucleobases found!";
    }
    return 0;
}
    /*for(i=0;i<input;i++)
    {
        flag=0;
        a=str[i];
        for(j=0;j<len[i];j++)
        {
            if(a[j]=='U')
            {
                flag=1;
                cout<<"Error RNA nucleobases found!";
                break;
            }
        }
        if(flag==0)
        {
            for( j=0;j<len[i];j++)
            {
                if(a[j]=='A')
                {
                    cout<<"T";
                }
                else if(a[j]=='T')
                    cout<<"A";
                else if(a[j]=='G')
                    cout<<"C";
                else if(a[j]=='C')
                    cout<<"G";
            }
        }
        if(i<input-1)
        {
            cout<<"\n";
        }
    }*/

