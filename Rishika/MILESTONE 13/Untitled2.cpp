//max possible size of subsequence with adjacent letters not same
#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main()
{   int t=0;
	string s;
	cin>>s;
	if(s.length()>=1&&s.length()<=100000){
    int q,a,b;
	cin>>q;
	if(q>=1&&q<=100000){
    for(int i=0;i<q;i++)
	{
		cin>>a>>b;
	if(a>=1&&a<=(10^18)&&b>=1&&b<=(10^18)){
		if(s[a]==s[b])
		{cout<<"Yes"<<endl;
		break;
		}else
		{cout<<"No"<<endl;
		break;
		}
	}
	}
	}
	}	
}
