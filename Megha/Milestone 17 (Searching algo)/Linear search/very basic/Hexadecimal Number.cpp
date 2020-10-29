

#include <iostream>
using namespace std;
int main() {
    int n,range;
    cin>>n;
    while(n--){
    int first,second;
    cin>>first>>second;

    if(first>1 && second>1){
         range = second - first + 1;
    }
    else{
        range = second - first;
    }
    cout<<range<<endl;
    }
    return 0;
}
