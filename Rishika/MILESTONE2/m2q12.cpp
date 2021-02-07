//q12
#include<iostream>
using namespace std;
int main()
{
	int a;
	char s,m;
	cout<<"Enter your  age- "<<endl;
	cin>>a;
	cout<<"Enter your sex(M/F)- ";
	cin>>s;
	cout<<"Enter your marital status(Y/N)- ";
	cin>>m;
    if(s=='M')
	{if(a<40 && a>20)
	{cout<<"You can work anywhere.";
	}else if(a<60 && a>40)
	{cout<<"You will work in urban areas only.";
	}else
	{cout<<"ERROR";
	}
	}else 	if(s=='F')
	{cout<<"You will work in urban areas only.";
	}
}
