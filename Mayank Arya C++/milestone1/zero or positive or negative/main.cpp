#include <iostream>

using namespace std;

int main(){

int a;

cout<< "Enter any number" << endl;
cin >> a;

if(a==0){
    cout<< " Entered number is equal to zero"<<endl;
}
else if(a>0){
    cout<< a <<" is a positive number" << endl;
}
else{
    cout<< a << " is a negative number" << endl;
}

return 0;
}
