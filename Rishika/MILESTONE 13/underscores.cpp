//replacing underscores 
#include<iostream>
#include<string>
using namespace std;
int main()
{
   int t,i,p,j,c,v;
   cin>>t;
   if(t>=1&&t<=4000)
   {
    while(t--){
    c=1;v=0;
   	string s;
   	cin>>s;
   	int a[26]={0};
   	for(i=0;s[i]!='\0';i++)
   	{
   				if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')&&a[s[i]-'a']==0)
   				{
				   v++;
   				a[s[i]-'a']=1;
				}else if(s[i]=='_')
				{
					c=c*v;
				}
	
	}
	}cout<<c<<endl;
	}
  }
