

#include <iostream>

using namespace std;
int main() {
    char str1[80],str2[80];
    cout<<"Enter the first string"<<endl;
    gets(str1);
    cout<<"Enter the second string"<<endl;
    gets(str2);
    int i,j;
    for(i=0;str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0';i++);
    if(str1[i] - str2[i] == 0){
        cout<<"Strings are equal ";
    }
       cout<<"Strings are not equal";
    return 0;

}
