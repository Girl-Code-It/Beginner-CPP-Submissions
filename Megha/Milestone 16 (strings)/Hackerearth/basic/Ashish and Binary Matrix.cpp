

#include <iostream>
#include<string.h>
#include<string>
using namespace std;
int main() {
    int i,j,row,col,k;
    
    for(k=0;k<l;k++){   
    int ans=0;
    cin>>row>>col; //input of no. of rows and columns
    string s[row];
     for(i=0;i<row;i++){
        
         cin>>s[i];   //input the string of each row
    
     }
    for(i=0;i<row-1;i++)   //if i=0 1st loop will be 101
        for(j=i+1;j<row;j++){    //if j=1 loop will be 000
            if(s[i].compare(s[j])==0){     //if loop 101 & 000 are equal then it will be equal to zero 
         ans=1;
         break;
         }
        
        
    }
     if(ans==1){
             cout<<"No";     //and if two rows are equal then even if we delete the column unique row will not form
         }
         else{
             cout<<"Yes";
         }
    cout<<endl;
    }
    return 0;
}
