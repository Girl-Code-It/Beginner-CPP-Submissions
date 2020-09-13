


// C++ program to demonstrate array of strings using 
// array of strings. 
#include <bits/stdc++.h> 
#include<string>
using namespace std; 
int main() 
{ 
    int i,j,t,l1,l2,count=0;
    cin>>t;
    // Initialize String Array 
    string str[1000];
    // Print Strings 
    for ( i = 0; i < t; i++) {
    cin>>str[i];
       }
       for ( i = 0; i < t; i++) {
              
       for(j=i+1;j<t;j++){
             l1=str[i].length();
             l2=str[j].length();
               if((str[i][0]==str[j][0]) && (str[i][l1-1]==str[j][l2-1]))
               count++;
       }
}
cout<<count;
}
