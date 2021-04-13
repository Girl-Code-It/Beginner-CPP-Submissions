#include <iostream>
using namespace std;
int main(){
    int sum=0, i=0, n;
    cout << "Enter the limit n : ";
    cin >> n;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout << "The sum of"<< n <<" natuaral numbers : "<< sum;
    return 0;
}