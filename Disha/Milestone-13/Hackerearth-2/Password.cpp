using namespace std;
#include<iostream>
#include<string>
#include<algorithm>
int main()
{
    int n,i,j,flag=0;
    string s[100],str;
    cin>>n;

    //input passwords
    for(i=0;i<n;i++)
        cin>>s[i];

    //check for palindrome
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            str=s[j];
            reverse(str.begin(),str.end());
            if((s[i].compare(str))==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;
    }
    //printing he result
    int len=(str.length()/2);
    cout<<s[i].length()<<" "<<s[i][len];
    return 0;
}
