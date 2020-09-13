#include <iostream>
using namespace std;
int main() {
    char str[80];
    cout<<"Enter string: "<<endl;
    cin.getline(str,80);
    int i;
    for(i=0;str[i] != '\0';i++);
       cout<<"The length of the string is "<<i<<".";
    return 0;

}
