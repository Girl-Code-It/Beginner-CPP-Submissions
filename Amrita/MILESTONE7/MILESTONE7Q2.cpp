#include<bits/stdc++.h>
#define size 8
using namespace std;
int main ()
{
    int error=0,i, carry=1;
    char bin[size+1],onecomp[size+1],twoscomp[size+1];

  /*cout<<"Enter the size of the binary digit you want to enter \n";
  cin>>size;*/
    cout<<"Enter the binary value \n";
    cin>>bin;
    for (i=0;bin[i]!='\0'; i++)
    {
        if (bin[i]=='0')
            onecomp[i]='1';

        else if (bin[i]=='1')
            onecomp[i]='0';
        else
           {

            cout<<"Enter a valid input\n";
            error=1;
            break;


    }
    }
    onecomp[size]='\0';



    for(int k=size-1;k>=0;k--)
    {

        if (onecomp[k]=='1' && carry==1)
           {

            twoscomp[k]='0';

           }
        else if (onecomp[k]=='0' && carry==1)
           {

            twoscomp[k]='1';
            carry=0;

           }
           else
           {

            twoscomp[k]=onecomp[k];
           }
    }

     twoscomp[size]='\0';
     if (error==0)
{


        cout<<"The binary value entered by you "<<bin <<endl;

        cout<<"The one's complement "<<endl;
        cout<<onecomp;
        cout<<"\n 2s com \n"<<twoscomp;

}


    return 0;
}

