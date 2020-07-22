using namespace std;
#include<iostream>

int check(int n)
{
    if(n>90)
        cout<<"\n Grade=AA";

    else if(n>80 && n<=90)
        cout<<"\n Grade=AB";

    else if(n>70 && n<=80)
        cout<<"\n Grade=BB";

    else if(n>60 && n<=70)
        cout<<"\n Grade=BC";

    else if(n>50 && n<=60)
        cout<<"\n Grade=CD";

    else if(n>40 && n<=50)
        cout<<"\n Grade=DD";

    else if(n<=40)
        cout<<"\n Grade=Fail";
}
int main()
{
    int marks;
    cout<<"\n Enter marks of student:";
    cin>>marks;
    check(marks);
    return 0;
}
