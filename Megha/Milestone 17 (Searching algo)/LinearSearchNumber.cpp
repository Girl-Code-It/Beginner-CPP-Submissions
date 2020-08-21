


#include <iostream>
using namespace std;
int SearchNumber(int A[], int n, int x){
    for(int i=0;i<n;i++){
        if(A[i]==x)
        return i;
    }
    return -1;
}
int main() {
    int A[]={10, 20, 80, 30, 60, 50, 110, 100, 130, 170};
    int x;
    cin>>x;
    int index = SearchNumber(A,10,x);
    if(index == -1){
        cout<<"Element is not present";
    }
    else{
        cout<<"element is present at position "<<index;
    }
}
