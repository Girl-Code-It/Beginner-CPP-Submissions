#include <iostream>
using namespace std;
int main() {
    int x = 2;
    int y = 5;
    int z = 0;
    if(x==2){
        cout<<"yes\n";
    }else{
        cout<<"no\n";
    }
    if(x!=5){
        cout<<"yes\n";
    }else{
        cout<<"no\n";
    }
    if(x!=5 && y<=5){
        cout<<"yes\n";
    }else{
        cout<<"no\n";
    }
    if(z!=0 || x==2){
        cout<<"yes\n";
    }else{
        cout<<"no\n";
    }
    if(!(y<10)){
        cout<<"yes\n";
    }
    else{
        cout<<"no\n";
    }

    return 0;
}
