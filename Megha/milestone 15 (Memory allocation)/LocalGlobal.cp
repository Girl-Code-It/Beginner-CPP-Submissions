#include <iostream>
using namespace std;

    int a;   //global variable
    void add(void);
    int main(){
        cout<<"Enter value for global variable"<<endl;;
        cin>>a;
    }
     void add(void){
         int b;
         cout<<"Enter value for local variable"<<endl;
         cin>>b;
         cout<<"Addition is"<<(a+b);
}
