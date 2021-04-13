#include <iostream>
using namespace std;
int main(){
    int year;
    cout<< "Enter year to be checked : ";
    cin >> year;

    if(year % 4 == 0){

        if(year % 100 == 0){

            if( year % 400 == 0){
                cout << "This is a leap year";
            }
            
            else{
                cout << "This is not a leap year";
            }
        }
        else{
            cout << "This is a leap year";
        }
    }
    else{
        cout << "This is not a leap year";
    }
    return 0;
    
 }