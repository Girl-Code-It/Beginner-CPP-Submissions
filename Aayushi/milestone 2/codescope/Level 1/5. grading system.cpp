#include<iostream>

using namespace std;

int main () {
    int a;
    cout << "Enter the marks." << endl;
    cin >> a;
    if (0 <= a && a < 25) {
        cout<< "F"<< endl;
    }
    else if (25<=a && a<45) {
        cout<< "E" << endl;
    }
    else if (45<=a && a<50) {
        cout<< "D" <<endl;
    }
    else if (50<=a && a<60) {
        cout<< "C"<<endl;
    }
    else if (60<=a && a<80) {
        cout<< "B" << endl;
    }
    else if (80<=a && a<=100) {
        cout<< "A" << endl;
    }
    else {
        cout<< "invalid marks.";
    }
    return 0;
}
