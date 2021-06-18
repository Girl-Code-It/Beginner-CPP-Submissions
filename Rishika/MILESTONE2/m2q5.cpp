//q5- take the age of three people and print the eldest and younges tamong them.
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter three ages- ";
	cin>>a>>b>>c;
	if(a>b && a>c)
	{cout<<a<<" is oldest.";
     if(b>c)
     {cout<<c<<" is the youngest.";
	 }else if(b<c)
	 {cout<<b<<" is the youngest";
    }
    }
    else if(b>a && b>c)
    {cout<<b<<" is the oldest.";
    if(a>c)
    {cout<<c<<" is youngest.";
	}else if(a<c)
	{cout<<c<<" is youngest.";
	}
	}else if(c>a && c>b)
	{cout<<c<<" is oldest.";
	if(a>b)
	{cout<<b<<" is youngest.";
	}else if(b>a)
	{cout<<a<<" is youngest.";
	}
	}return 0;
}
