using namespace std;
#include<iostream>
int main()
{
    int a[50],i,siz,freq[50],count1;

    cout<<"\n Enter the size of array :";
    cin>>siz;
    for(i=0;i<siz;i++)
    {
        cout<<"Enter number "<<i+1<<" :";
        cin>>a[i];
        freq[i]= -1 ;
    }

    for(i=0;i<siz;i++)
    {
        count1=1;
        for(int j=i+1 ;j<siz;j++)
        {
            if(a[i]==a[j])
            {
                count1++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0)
        {
            freq[i]=count1;
        }
    }

    cout<<"\n Frequency of each element :"<<endl;
    for(i=0;i<siz;i++)
    {
        if(freq[i]!=0)
        {
            cout<<"Frequency of "<<a[i]<<"is :"<<freq[i]<<endl;
        }
    }
    return 0;
}
