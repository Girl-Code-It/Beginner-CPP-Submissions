//Secret Messages!
#include<string.h>
using namespace std;

int main() {
	long t,n,k,r,temp;
	string s; 
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		cin>>s;

		for(int i=0;i<n;i++)
		{
			if(islower(s[i]))    //lowercase 
			{	r=k%26;         //r remians same when leass than 26 else we calculate it by                                          modulus oprator,remaing value gets added
				temp=(int)s[i]+r;
				if(temp<=122)
				{cout<<(char)temp;}
				else
				{cout<<(char)(temp-26);} //subtracting 26 to show one complete rotation
			}
			else if(isupper(s[i]))   //uppercase
			{   r=k%26;
				temp=(int)s[i]+r;
				if(temp<=90)
			   {cout<<(char)temp;}
				else
			   {cout<<(char)(temp-26);}
			}
			else if(isdigit(s[i]))  //numbers
			{
				r=k%10;
				temp=(int)s[i]+r;
				if(temp<=57)
			{	cout<<(char)temp;}
				else
				{cout<<(char)(temp-10);}
			} 
			else
			cout<<s[i];
		    }
		
			cout<<endl;
	}
	return 0;
}

