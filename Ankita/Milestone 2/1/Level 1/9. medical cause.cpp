#include<iostream>
using namespace std;
int main (){
     float a, b, c;
     char d;
    cout<< "Enter total number of classes held."<<endl;
    cin>>a;
    cout<< "Enter total number of classes attended."<<endl;
    cin>>b;
    c = b/a*100;

    if (c>75){
        cout<< "Your attendance is "<< c <<endl;
        cout<< "You are allowed to sit in exam."<<endl;
    }
    else {
        cout<< "Your attendance is "<< c << endl;
        cout<< "Do you have medical certificate?"<<endl;
        cin>>d;
        if (d=='Y' || d=='y'){
        cout<< "You are allowed to sit in exam"<<endl;
        }
        else if (d=='N' || d=='n') {
            cout<< "You are not allowed to sit in exam."<<endl;
        }
        else {
            cout<< "invalid input"<<endl;

            }
            }  return 0;

}
