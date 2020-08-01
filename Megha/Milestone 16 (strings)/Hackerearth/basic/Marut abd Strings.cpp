

#include <iostream>
#include<string>
#include <string.h>
using namespace std;
int main() {
	int l,i,j,t;
    cin>>t;
	  if(t > 10 || t < 1)
    {
        cout<<"Invalid Test";
        return 0;
    }
    for(i=0;i<t;i++){
		int upper=0,lower=0;
    char s[1000];
    cin>>s;
    l=strlen(s);
	if(l > 100){
            cout<<"Invalid Input";
			}
        else
        {
    for(j=0;j<l;j++){
    if(isupper(s[j]))
        upper++;
    
    else if(islower(s[j]))
        lower++;
    
	}
    if((upper==0) && (lower==0)){
        cout<<"Invalid Input";
    }
    else{
        if(upper>lower)
            cout<<lower;
        
        else
            cout<<upper;
        
    }
	
		}
    cout<<endl;
    }
    return 0;
}
