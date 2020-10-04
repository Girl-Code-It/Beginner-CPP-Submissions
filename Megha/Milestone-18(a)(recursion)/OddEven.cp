#include <iostream>
using namespace std;
void EvenOdd(int low,int high){
    if(low>high){
        return;
    }
    cout<<low<<" ";
    EvenOdd(low+2,high);
}
int main() {
    int low,high;
    cin>>low>>high;
    cout<<"All odd numbers from "<<low<<" to "<<high<<" are :";
    EvenOdd(low,high);
    cout<<endl;
    cout<<"All even numbers from "<<low<<" to "<<high<<" are :";
    EvenOdd(low+1,high);
 
}
