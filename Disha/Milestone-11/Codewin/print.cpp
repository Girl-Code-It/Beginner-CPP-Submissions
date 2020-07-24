using namespace std;
#include<iostream>

void print(int a[50],int siz,int start=0)
{

    if(start<siz)
    {
        cout<<a[start]<<" ";
        start++;
        print(a,siz,start);
    }

}
int main()
{
    int a[50],siz,i;
    cout<<"Enter the size of array :";
    cin>>siz;
    for(i=0;i<siz;i++)
    {
        cout<<"Enter number "<<i+1<<" :";
        cin>>a[i];
    }
    cout<<"\n Elements of array =";
    print(a,siz);
    return 0;
}
