/*iven a string str your task is to complete the function spaceString which takes 
only one argument the string str and  finds all possible strings that can be made
 by placing spaces (zero or one) in between them. */

#include<bits/stdc++.h>
using namespace std;

void printseries(char str[],char str1[],int i,int j,int n){
    if(i==n)
	{
        str1[j] = '\0';    
        cout<<str1<<"$";
        return;
    }
    // 2 cases are to either put the character without space(AB) or with space(A_B)
    str1[j]=str[i];		
    printseries(str,str1,i+1,j+1,n);			//without space
 
    str1[j]=' ';
    str1[j+1]=str[i];					// with space
    printseries(str,str1,i+1,j+2,n);
}

void spaceString(char str[])
{
    //Your code here
    int n = strlen(str);
    char str1[10000];
        str1[0]=str[0];
      printseries(str,str1,1,1,n);
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char str[10000];
        cin>>str;
        spaceString(str);
        cout<<endl;
    }

}
