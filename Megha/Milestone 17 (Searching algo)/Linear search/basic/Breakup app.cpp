#include<iostream>
#include<string.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    long long int countG1=0,countG2=0,countM=0;
    while(n--){
    string s;
    getline(cin,s);
    
        for(long long int i=0;i<s.size();i++){
    
            if(isdigit(s[i])){
            
        if(s[0]=='G'){
        if(s[i]=='2' && s[i+1]=='0')
            countG1 += 2;
        else if(s[i]=='1' && s[i+1]=='9')
             countG2 += 2;
        else{
            if(isdigit(s[i]) && isdigit(s[i+1]))
           countM += 2;}
        }
        else if(s[0]=='M'){
        if(s[i]=='2' && s[i+1]=='0')
            countG1++;
        else if(s[i]=='1' && s[i+1]=='9')
            countG2++;
        else{
            if(isdigit(s[i]) && isdigit(s[i+1]))
           countM++;}
        }
            }
        }
     }
     int max_ele = max(countG1,max(countG2,countM));
        if(max_ele==countM)
            cout<<"No Date"<<endl;
        else
            cout<<"Date"<<endl;

    return 0;
}
