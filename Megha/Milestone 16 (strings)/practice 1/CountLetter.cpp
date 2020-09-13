#include <iostream>
using namespace std;
int main() {
    char str[80];
    cout<<"Enter string: "<<endl;
    cin.getline(str,80);
    int i,count=0;
    for(i=0;str[i] != '\0';i++){
      count++;
    }
       cout<<"The number of words in string is "<<count<<".";
    return 0;

}
