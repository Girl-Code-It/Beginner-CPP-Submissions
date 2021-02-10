#include<iostream>
#include<cstring>
using namespace std;
int main()
{	
	int t;
	cin>>t;
	while(t--)
	{	
		long i,j,r,c,n=0;
		cin>>r>>c;
		string s[r];
		for(i=0;i<r;i++)
		{	
			cin>>s[i];
		}
		for(int i=0; i<r-1; i++)   
        {   
			for(int j=i+1; j<r; j++)
            {    if(s[i].compare(s[j])==0) 
                {   n=1;       
                    break;
                }
			}	
		}		
        if(n)                
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
	}

}
