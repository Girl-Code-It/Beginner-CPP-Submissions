#include<iostream>
using namespace std;
int main () {
    int a, b, c;
    cout<< "Enter age of first person" <<endl;
    cin>>a;
    cout<< "Enter age of second person" <<endl;
    cin>>b;
    cout<< "Enter age of third person" <<endl;
    cin>>c;
    if (a>b && a>c && b>c) {

        cout<< "first person is the oldest and third person is the youngest"<<endl;
       }
        else if (a>b && a>c && c>b) {
            cout<< "first person is the oldest and second person is youngest" << endl;
        }
        else if (a>b && a<c) {
            cout<< "third person is the oldest and second person is the youngest"<<endl;
        }
        else if (a<b && a>c) {
            cout<< " second person is the oldest and third person is the youngest"<<endl;
        }
        else if (a<b && a<c && c>b) {
            cout<< "third person is the oldest and first is the youngest"<<endl;
        }
        else if (a<b && a<c && b>c) {
            cout<< "second person is the oldest and first person is the youngest"<<endl;
        }
        return 0;


}
