#include <iostream>
using namespace std;
int main(){
    int n, s, reverse =0, rem;
    cout << "Enter number : ";
    cin >> n;
    s=n;
    int count=0;
    while(s!=0){
        rem = s%10;
        reverse = reverse*10 + rem;
        s= s/10;
    }
    s=n;
    while(reverse !=0 ){
        int rem = reverse%10;
        switch(rem){
            case(0): cout << "zero ";
                break;
            case(1): cout << "one ";
                break;
            case(2): cout << "two ";
                break;
            case(3): cout << "three ";
                break;
            case(4): cout << "four ";
                break;
            case(5): cout << "five ";
                break;  
            case(6): cout << "six ";
                break;
            case(7): cout << "seven ";
                break; 
            case(8): cout << "eight ";
                break;
            case(9): cout << "nine ";
                break;                             
        }
        reverse = reverse/10;
        count--;
    }
    return 0;
}