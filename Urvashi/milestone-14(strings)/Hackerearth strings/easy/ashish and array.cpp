// question: to check that if we can delete any one column from the matrix so that every row of the matrix becomes unique.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int row, column, flag=0;
        cin>>row>>column;  // input row aand column.
        string s[row];     // string of size of row.
        for(int i=0; i<row; i++)
            cin>>s[i];           // input string.
        for(int i=0; i<row-1; i++)   
            for(int j=i+1; j<row; j++)
            // checking the alternate char of string if they are same . if they are same means elements of all 
            // rows are same.
                if(s[i].compare(s[j])==0) 
                {
                    flag=1;       // flag=1;
                    break;
                }
        if(flag)                
            cout<<"No"<<endl;    //if all elements of all rows are same then its not possible to make the 
            //remaining rows unique after deleting one of the column
        else
            cout<<"Yes"<<endl;
    }
}
