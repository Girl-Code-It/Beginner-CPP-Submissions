
#include <bits/stdc++.h>
using namespace std;
void copyString(char s1[], char s2[], int i){
    s2[i] = s1[i];
    if(s1[i]=='\0')
    return;
    copyString(s1,s2,i+1);
}
int main() {
    char s1[20];
    cin>>s1;
    char s2[20];
    copyString(s1,s2,0);
    cout<<"Program to copy one char to other"<<endl;
    cout<<"The first char is "<<s1<<endl;
    cout<<s2;
}

//input megha
//output megha
