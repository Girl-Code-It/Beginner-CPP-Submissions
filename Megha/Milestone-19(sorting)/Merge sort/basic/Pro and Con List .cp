#include <iostream>
using namespace std;
void merge(int *happy,int *left,int leftcount,int *right,int rightcount){
    int i=0,j=0,k=0;
    while(i<leftcount && j<rightcount){
        if(left[i]<right[j]){
        happy[k]=left[i];
        i=i+1;
        }
        else{
            happy[k]=right[j];
            j=j+1;
        }
        k=k+1;
    }
    while(i<leftcount){
        happy[k]=left[i];
        i=i+1;
        k=k+1;
        }
    
    while(j<rightcount){
        happy[k]=right[j];
        j=j+1;
        k=k+1;
        }
    
}
void mergeSort(int *happy,int n){
    if(n<2){
        return;
    }
    int mid=n/2;    //will divide happyay(int two equal halfs)
    int left[mid];
    int right[n-mid];
    for(int i=0;i<mid;i++){
        left[i]=happy[i];
    }
    for(int i=mid;i<n;i++){
        right[i-mid]=happy[i];
    }
    mergeSort(left,mid);
    mergeSort(right,n-mid);
    merge(happy,left,mid,right,n-mid);
}
int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    long long int favour,anger,totalAnger=0;
    int happy[n+1];
    for(int i=0;i<n;i++){
        cin>>favour>>anger;
        happy[i]=favour+anger;
        totalAnger+=anger;
    }
    mergeSort(happy,n);
    int sum=0;
    for(int i=n-2;i<n;i++){
       sum+=happy[i];
    }
    cout<<sum-totalAnger<<endl;
}
}
