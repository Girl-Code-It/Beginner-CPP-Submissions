   #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    int main()
    {
    	ll i,j,k,l,m,n,o,p=0;
    	cin>>n;
    	getchar();
    	while(n--)
    	{
    		m=0;k=0;
    		string c[10005];
    		string a,b;
    		getline(cin, a);
    		stringstream x(a);
    		while(getline(x,b, ' '))
    		{
    			c[k++].assign(b);
    		}
    		for(i=(k-1);i>=0;i--)
    		{
    			cout<<c[i]<<" ";
    		}
    		cout<<endl;
    	}
    }