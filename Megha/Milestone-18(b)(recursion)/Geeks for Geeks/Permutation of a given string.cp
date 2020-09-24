//c++ program to print
//permutation with duplicates allowed
#include <bits/stdc++.h>
using namespace std;
//swapping two pointers
void swap(char *a, char *b){
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return;
}
void printStrings(char *str1, int l, int h){
    if(l==h){            //if low become to high the print the string
        cout<<str1;
        cout<<" ";
        return;
    }
    for(int i=l;i<=h;i++){
        swap((str1+l),(str1+i));         //swap low element with every element of i
        printStrings(str1,l+1,h);          //calling function
        swap((str1+l),(str1+i));          //then again swap the element
    }
}
//driver code to test above function
int main() {
    int n;
    cin>>n;
    char str[100];
    for(int i=0;i<n;i++){
    cin>>str;
    int n=strlen(str);
    printStrings(str,0,n-1);
    cout<<endl;
    }
}
