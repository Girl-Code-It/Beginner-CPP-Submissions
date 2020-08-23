


#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int n;
    cin>>n;
	long long int i,max=0,min=0;
    int A[100000];

    for(i=0;i<n;i++){
        cin>>A[i];
    }

    for(i=0;i<n-1;i++){
        min += A[i];
    }

    for(i=1;i<n;i++){
        max += A[i];
    }

    cout<<min<<" "<<max;
}
