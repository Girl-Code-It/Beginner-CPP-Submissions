#include <iostream>
using namespace std;
int main(){
    int n, rem, reverse=0, s;
    cout << "Enter the number : ";
    cin >> n;
    s = n;
    while (s!=0){
        rem = s%10;
        reverse = reverse*10 + rem;
        s =s/10;
    }
    if(reverse==n)
        cout << "This is a palindrome";
    else
        cout << "This is not a palindrome";
    return 0;        
}