
#include<iostream>
using namespace std;
int main () {
    char a;
    cout<< "Enter the character"<< endl;
    cin>>a;
    if (a>=65 && a<= 90) {
        cout<< "Entered character is in uppercase"<< endl;
    }
    else if (a>=97 && a<=122) {
        cout<< "Entered character is in lowercase"<< endl;
    }
    else {
        cout<< "Invalid input"<< endl;
    }
    return 0;

}
