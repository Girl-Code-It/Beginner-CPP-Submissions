//Quick Sort
#include <iostream>
using namespace std;

long long int partition(long long int *days,long long int start,long long int end){
    long long int pivot = days[end];
    long long int partitionIndex = start;     //start partion index at start initially
    for(long long int i=start;i<end;i++){
        if(days[i]<pivot){
            long long int temp = days[i];
            days[i] = days[partitionIndex];      //swap if element is lesser than pivot
            days[partitionIndex] = temp;
            partitionIndex++;
        }
    }
    long long int ans = days[partitionIndex];          //swap pivot with element at partition index
            days[partitionIndex] = days[end];
            days[end] = ans;
        return partitionIndex;
}

void QuickSort(long long int *days,long long int start,long long int end){
    if(start<end){
        long long int partitionIndex = partition(days,start,end);  //calling partition
        QuickSort(days,start,partitionIndex-1);
        QuickSort(days,partitionIndex+1,end);
    }
}

int main() {
    long long int n;   //number of pkemons
    cin>>n;
    long long int days[n+1];  //where the i-th integer denotes the number of days it takes for the i-th pokemon to evolve.
    for(long long int i=0;i<n;i++){
        cin>>days[i];
    }
    QuickSort(days,0,n-1);
    long long int temp,max=0;
        for(int i=0;i<n;i++){
            temp =days[i]+n-i;
            if(temp>max){
                max=temp;
            }
        }
    cout<<max+1<<endl;
    return 0;
}
