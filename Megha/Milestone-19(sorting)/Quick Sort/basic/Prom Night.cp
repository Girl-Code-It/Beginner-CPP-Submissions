//Quick Sort
#include <iostream>
using namespace std;

int partition(int *boy,int start,int end){
    int pivot = boy[end];
    int partitionIndex = start;     //start partion index at start initially
    for(int i=start;i<end;i++){
        if(boy[i]<pivot){
            int temp = boy[i];
            boy[i] = boy[partitionIndex];      //swap if element is lesser than pivot
            boy[partitionIndex] = temp;
            partitionIndex++;
        }
    }
    int ans = boy[partitionIndex];          //swap pivot with element at partition index
            boy[partitionIndex] = boy[end];
            boy[end] = ans;
        return partitionIndex;
}

void QuickSort(int *boy,int start,int end){
    if(start<end){
        int partitionIndex = partition(boy,start,end);  //calling partition
        QuickSort(boy,start,partitionIndex-1);
        QuickSort(boy,partitionIndex+1,end);
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    int boy[n+1];
    int girl[m+1];
    for(int i=0;i<n;i++){
        cin>>boy[i];
    }
    for(int i=0;i<m;i++){
        cin>>girl[i];
    }
    QuickSort(boy,0,n-1);
    QuickSort(girl,0,m-1);
    
    int ans=0,i=0,j=0;
    while(i<n && j<m){
        if(girl[j]<boy[i]){
           i++;
           j++;
           ans=1;
        }
        else if(girl[j]>=boy[i]){
            ans=0;
            break;
        }
    }
    if(ans==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
}
