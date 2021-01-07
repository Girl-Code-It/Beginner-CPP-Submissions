#include<iostream>
#include<queue>
using namespace std;

int main(){
    int n,first;
    cin>>n;
    int second[n+1];
    queue<int> q;

    for(int i=0;i<n;i++){
        cin>>first;
        q.push(first);
    }

    for(int i=0;i<n;i++){
        cin>>second[i];
    }

    int i=0,time=0;
    while(!q.empty() && i<n){
        if(q.front() == second[i]){
            q.pop();
            i++;
        }
        else{
            first = q.front();
            q.pop();
            q.push(first);
        }
        time++;
    }

    cout<<time<<endl;
}
