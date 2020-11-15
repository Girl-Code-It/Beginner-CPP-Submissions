#include <iostream>
using namespace std;
void swap(int a,int b){
    int sum=0;
    sum=a|b;
    cout<<sum;
}
int main() {
    int a,b;
    cin>>a>>b;

    swap(a,b);
}
