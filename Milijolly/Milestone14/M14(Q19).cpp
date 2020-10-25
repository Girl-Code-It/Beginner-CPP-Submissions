#include<bits/stdc++.h>
using namespace std;

int palin(char a[20], char b[20],int l){
	
	int fg=1;
	for(int k=0,j=l-1;k<l;k++,j--)
	{	
		if(a[k]!=b[j])
            {
                fg=0;
                break;
            }
	}
	return fg;
}

int main() {
	int N,l,m,i,j,flag; 
	char str[20][20];
	cin>>N;			   // possible passwords 
	for(i=0;i<N;i++)	//input passwords
	  cin>>str[i];
	  
    for(i=0;i<N;i++)
	{   l=strlen(str[i]);
		
		for(j=0;j<N;j++)
		{ 
			if(j!=i)
			{	flag=palin(str[i],str[j],l);
				if(flag==1)    //check palindrome 
				{
					m=l/2;
					cout<<l<<" ";
					cout<<str[i][m];
					exit(0);     //displsay middle character 
				}
			}
		}
	}
 return 0;
}

