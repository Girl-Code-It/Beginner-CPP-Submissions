using namespace std;
#include<iostream>

int vote(int n)
{
    if(n>=18)
        cout<<"\n Yes person is eligible to vote";
    else
        cout<<"\n No person is not eligible to vote";
}
int main()
{
    int age;
    cout<<"\n Enter the age :";
    cin>>age;
    vote(age);
    return 0;
}

