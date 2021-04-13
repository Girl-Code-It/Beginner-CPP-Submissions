#include <iostream>
using namespace std;
int main(){

    int n, rem;
    cout << "Enter number : ";
    cin >> n;
    int frequency[10];

    for(int i=0; i<10; i++){
        frequency[i]=0;
    }

    while(n !=0){
        rem = n%10;
        frequency[rem]++;
        n= n/10;
    }

    for(int i=0; i<10; i++){
        cout << "\nFrequency of "<< i << " is : "<< frequency[i];
    }

    return 0;
}