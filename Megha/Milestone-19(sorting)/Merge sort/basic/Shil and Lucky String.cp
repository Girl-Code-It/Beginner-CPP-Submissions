#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;   //length of string
    cin>>n;
    
    char str[n+1];  //string
    cin>>str;
    int mid=n/2;  //for dividing elements in two half
    char left[mid];
    char right [n-mid];
    for(int i=0;i<mid;i++){
        left[i]=str[i];
    }
    for(int i=mid;i<n;i++){
        right[i-mid]=str[i];
    }
    int count1=1,count2=1,count3=1;
   int i=0,j=0;
   while(i<mid && j<n-mid){
        if(left[i]>right[j]){
            count1++;
            i++;
            j++;
        }
        else if(left[i]<right[j]){
            count2++;
            i++;
            j++;
        }
        else if(left[i]=right[j]){
            count3++;
            i++;
            j++;
        }
    }
    cout<<min(min(count1,count2),count3);

}
