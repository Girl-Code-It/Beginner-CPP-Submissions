#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,n;
    cin>>t>>n;
    char name[t][21];
    char ans[21];
    int points[t+1],temp;
    for(int i=0;i<t;i++){
        cin>>name[i]>>points[i];
    }
    for(int i=0;i<t-1;i++){
        for(int j=i+1;j<t;j++){
            if(points[i]<points[j]){
                int temp=points[i];
                points[i]=points[j];
                points[j]=temp;
                strcpy(ans,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],ans);
            }
            else if((points[i]==points[j]) && (strcmp(name[i],name[j])>0)){
                strcpy(ans,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],ans);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<name[i]<<endl;
    }   
}
