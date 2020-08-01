

#include <iostream>

using namespace std;
int main() {
    char str[80];
    cout<<"Enter string: "<<endl;
    cin.getline(str,80);
    int i;
    for(i=0;str[i] != '\0';i++);
     for(int j=i-1;j>=0;j--)
        {
        cout<<str[j];
    
    }
       
    return 0;

}
