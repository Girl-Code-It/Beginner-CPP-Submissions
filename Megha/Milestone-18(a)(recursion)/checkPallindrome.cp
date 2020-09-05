#include <bits/stdc++.h>
using namespace std;
int i;
void pallindrome(char str[], int i){
    int l=strlen(str);
    if(i<l/2){
        if(str[i]==str[l-i-1]){
            cout<<"String is pallindrome";
            return;}
            pallindrome(str,i+1);
    }
    else
     cout<<"String is not pallindrome";
}
int main()
{
    char str[20];
    cin>>str;
    int l;
    pallindrome(str,0);
   
}

//input mom
//ouput is pallindrome
