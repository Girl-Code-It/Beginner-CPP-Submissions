using namespace std;
#include<iostream>
int max_min(int a,int b)
{
    if(a>b)
    {
        cout<<"\n Greater number ="<<a;
        cout<<"\n Smaller number ="<<b;
    }
    else
    {
        cout<<"\n Greater number ="<<b;
        cout<<"\n Smaller number ="<<a;
    }


}
int main()
{
    int num1,num2;
    cout<<"\n Enter two numbers :";
    cin>>num1>>num2;
    max_min(num1,num2);
    return 0;
}
