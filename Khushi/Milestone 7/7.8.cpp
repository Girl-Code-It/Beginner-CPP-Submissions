#include<iostream>
using namespace std;
int main(){
    int  n, i, j, flag=0;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array: ";
    for(i=0; i<n; i++){
        cin>>a[i];
    }

    for(i=0; i<n; i++){
        for(j = i+1; j<n; j++){
            a[i] == a[j];
            flag ++;
        }
    }

    if(flag=1)
            cout<< "Array element "<<i<<" and "<<j<<" are equal."<<endl;

    else
    cout<<"Array elements are not equal."<<endl;

return 0;

}
