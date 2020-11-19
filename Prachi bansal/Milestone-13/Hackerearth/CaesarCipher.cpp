#include<iostream>
using namespace std;

int main(){
    int n,i,j,m,l,flag;
    string s,t,a;
    cin>>n;
    for(i=0;i<n;i++){
    	s="";
    	t="";
    	a="";
    	cin>>s;
		cin>>t;
		flag=1;
		m=s.length();
		for(j=0;j<m;j++){
			if(s[j]>t[j]){
				l=26-(s[j]-t[j]);
			}else{
				l=t[j]-s[j];
			}
			a+=l;
		}
		for(j=0;j<m-1;j++){
		 	if(a[j]!=a[j+1]){
		 		flag=0;
		 		break;
			}
		}
		if(flag==0){
			cout<<-1<<endl;
		}else{
			cout<<l<<endl;
		}	
	}
    return 0;
}
