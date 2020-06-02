#include<bits/stdc++.h>

using namespace std;

void comp()
{
    int len,bre;
    cin>>len>>bre;

    if(len==bre)
    {
        cout<<"It's a square";
    }
    else
    {
    cout<<"It's a rectangle";
    }
    
}

void grtr()
{
    int num1,num2;
    cin>>num1>>num2;
    cout<<endl<<max(num1,num2);

}

void shop()
{
    int quantity,cost;
    cin>>quantity>>cost;
    if(quantity>1000)
    {
        cout<<(float)quantity*cost*0.9;
    }
    else
    {
        cout<<quantity*cost;
    }
    
}

void office()
{
    int salary , exp;
    cin>>salary>>exp;

    if(exp>5)
    {
        cout<<"\nThe bonus is"<<(float)0.05*salary;
    }
    else
    {
        cout<<"\nNo bonus";
    }
    
}

void grade()
{
    int marks;
    cin>>marks;
    cout<<endl;
    if(marks<25)
    {
        cout<<"Grade is F";
    }
    else if(marks>=25 && marks<45)
    {
        cout<<"Grade is E";
    }
    else if(marks>=45 && marks<50)
    {
        cout<<"Grade is D";
    }
    else if(marks>=50 && marks<60)
    {
        cout<<"Grade is C";
    }
    else if(marks>=60 && marks<80)
    {
        cout<<"Grade is B";
    }
    else
    {
        cout<<"Grade is A";
    }
    
}

void age()
{
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    cout<<endl;
    cout<<"The oldest is "<<max(a1,max(a2,a3));
    cout<<"\nThe youngest is"<<min(a1,min(a2,a3));
}

void abso()
{
    int num;
    cin>>num;
    cout<<endl<<abs(num);
}

void exam()
{
    int classes , total;
    cin>>classes>>total;

    float percent =( classes / total ) * 100;

    if(percent>=75.00)
    {
        cout<<"\n Allowed to sit in the exam";
    }
    else
    {
        cout<<"\nNot allowed to sit in the exam";
    }
    
}

void exam1()
{
    int classes , total;
    cin>>classes>>total;

    float percent =( classes / total ) * 100;

    if(percent>=75.00)
    {
        cout<<"\nAllowed to sit in the exam";
    }
    else
    {
        char op;
        cout<<"\nDo you have any medical case [Y]es or [N]o  ";
        cin>>op;
        if(op!='Y')
        cout<<"\nNot allowed to sit in the exam";
        else
        {
            cout<<"Allowed to sit in the exam";
        }
        
    }
    
}

void check()
{
    int x=2,y=5,z=0;
    cout<<"\n";
    x==2?cout<<"1":cout<<"0";
    cout<<"\n";
    x!=5?cout<<"1":cout<<"0";
    (x!=5 && y>=5)?cout<<"1":cout<<"0";
    cout<<"\n";
    (z!=0 || x==2)?cout<<"1":cout<<"0";
    cout<<"\n";
    !(y<10)?cout<<"1":cout<<"0"; 
}

void alpha()
{
    char op;
    cin>>op;
    if(islower(op))
    {
        cout<<"Lower case:";
    }
    else
    {
        cout<<"Upper case:";
    }
    
}

void print()
{
    int n;
    cin>>n;
    int i=i;
    while(i!=n)
    {
        cout<<i;
        cout<<endl;
        ++i;
    }
}

void print1()
{
    int n;
    cin>>n;
    int i=n;
    while(i!=0)
    {
        cout<<i;
        cout<<endl;
        --i;
    }
}

void alpha1()
{
    char a='A';
    // int ctr=1;
    while(a<='Z')
    {
        cout<<a;
        cout<<endl;
        ++a;
        // ++ctr;
    }
}

void even()
{
    int n;
    cin>>n;
    int i=0;
    while(i<=n)
    {
        cout<<i;
        cout<<endl;
        i+=2;
    }
}

void odd()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        cout<<i;
        cout<<endl;
        i+=2;
    }
}

void num_sum()
{
    int n;
    cin>>n;
    long sum=0;
    while(n)
    {
        sum+=n;
        --n;
    }
    cout<<sum;
}

void even_sum()
{
    int n;
    cin>>n;
    long sum=0;
    int i=0;
    while(i<=n)
    {
        sum+=i;
        i+=2;
    }
    cout<<sum;
}

void odd_sum()
{
    int n;
    cin>>n;
    long sum=0;
    int i=1;
    while(i<=n)
    {
        sum+=i;
        i+=2;
    }
    cout<<sum;
}

void table()
{
    int n;
    cin>>n;
    for(int i=1;i<=10;++i)
        cout<<i<<" * "<<n<<" = "<<i*n;
}

void digits()
{
    string str;
    cin>>str;
    cout<<"\nThe number of digits are "<<str.length();
}

void solve()
{
    // comp();
    // grtr();
    // shop();
    // office();
    // grade();
    // age();
    // abso();
    // exam();
    // exam1();
    // check();
    // alpha();
    // print();
    // print1();
    // alpha1();
    // even();
    // odd();
    // num_sum();
    // even_sum();
    // odd_sum();
    // table();
    digits();

}

int main()
{
    solve();
    return 0;
}