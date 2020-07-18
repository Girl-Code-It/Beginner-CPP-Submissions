//program to find ones complement of a binary number
using namespace std;
#include<iostream>

int main()
{
    int error=0,i,len=6;
    char binary[len+1],comp[len+1];

    cout<<"Enter a binary number of length "<<len<<" :";
    cin>>binary;
    for(i=0;i<len;i++)
    {
        if(binary[i]=='0')
        {
            comp[i]='1';
        }
        else if(binary[i]=='1')
        {
            comp[i]='0';
        }
        else
        {
            cout<<"\n Wrong input"<<endl;
            error=1;
            break;
        }
    }
     comp[len]='\0';
        if(error==0)
        {
            cout<<"\n Original number ="<<binary;
            cout<<"\n One's Compliment="<<comp;
        }

    return 0;
}
