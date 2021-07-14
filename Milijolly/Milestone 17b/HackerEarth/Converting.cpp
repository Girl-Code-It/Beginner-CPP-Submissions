#include <bits/stdc++.h>
using namespace std;

int conv(int a,int b,int c)
{
    if(a>=b){     
		return (a-b)/2 + (a-b)%2;    //no of steps calculated by decreasing 2 i.e a-2*n=b
	}
    if (b%c == 0) 
    {
		return 1 + conv(a,b/c,c); 
	}
    else{
		int x=((b/c)+1)*c;
		return (x-b)/2 + (x-b)%2 + conv(a,x,c);
	}
    
}
int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        cout<<conv(a,b,c)<<endl;
    }
	
}
