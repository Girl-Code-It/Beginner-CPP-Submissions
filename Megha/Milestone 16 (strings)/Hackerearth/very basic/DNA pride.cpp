

#include <iostream>
#include <string>
using namespace std;
int main() {
    int l,t,n;
    int k=0;
    cin>>n;
    
    // Enter the string
   for(t=0;t<n;t++){
         
    int p;
    cin>>p; //length of first string
    char S1000000];
    cin>>S; 
    
    //Length of first string
    for(l=0;l<p;l++){
    if(S[l] == 'U'){
        k=1;
    }

    }
    if(k==1){
     cout<<"Error RNA nucleobases found!"<<endl;
    }
    else{
        for(l=0;l<p;l++){
        if(S[l] == 'A'){
            S[l] = 'T';
        }
        else if(S[l] == 'T'){
            S[l] = 'A';
        }
        else if(S[l] == 'G'){
            S[l] = 'C';
        }
        else{
            S[l] = 'G';
        }
        cout<<S[l];
    }
    cout<<endl;
    }
   }
    return 0;

}
