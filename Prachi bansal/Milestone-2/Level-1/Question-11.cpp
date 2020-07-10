#include <iostream>
using namespace std;
int main() {
    char ch;
    int a;
    cout<<"enter the character: ";
    cin>>ch;
    a=ch;
    if(a>=97 && a<=122){
        cout<<"\n you entered lowercase character";
    }else if(a>=65 && a<=90)
    {
        cout<<"\n you entered uppercase character";   
    }else{
        cout<<"\n you entered special character";
    }
   return 0;
}
