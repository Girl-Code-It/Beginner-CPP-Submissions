using namespace std;
#include<iostream>
int main()
{
    int temp,i,num=0,pos;
    string A,B;
    getline(cin,A);
    getline(cin,B);
    if(A.length()!=B.length())
    {
        cout<<"-1";
    }
    else
    {
        for(i=0;i<A.length();i++)
        {
            if(A[i]!=B[i])
            {
                pos=B.find(A[i],i+1);

                if(pos==-1)
                {
                    num=-1;
                    break;
                }

                temp=B[i];
                B[i]=B[pos];
                B[pos]=temp;
                num++;
            }
        }
        cout<<num;
    }
    return 0;
}
