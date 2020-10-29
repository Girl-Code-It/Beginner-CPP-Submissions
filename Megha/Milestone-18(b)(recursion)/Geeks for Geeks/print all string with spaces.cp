// C++ program to print permutations of a given string with spaces. 
#include <bits/stdc++.h>
using namespace std;
 
/* Function recursively prints the strings having space pattern. 
   i and j are indices in 'str[]' and 'str1[]' respectively */
void series(char str[],char str1[],int i,int j,int n){
    if(i==n){
        str1[j] = '\0';    
        cout<<str1<<"$";
        return;
    }

    // Either put the character 
    str1[j]=str[i];
    series(str,str1,i+1,j+1,n);

    // Or put a space followed by next character 
    str1[j]=' ';
    str1[j+1]=str[i];
    series(str,str1,i+1,j+2,n);
}
// This function creates str2[] to store individual output string and uses 
// series() to print all permutations. 
void printseries(char *str,int n){
    // Buffer to hold the string containing spaces 
    char str2[2*n];

    // Copy the first character as it is, since it will be always 
    // at first position 
    str2[0]=str[0];
    series(str,str2,1,1,n);
}
int main() {
   char str[10];
   cin>>str;
     int n=strlen(str);
    printseries(str,n);
}
