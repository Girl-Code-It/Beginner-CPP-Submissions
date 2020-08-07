

#include <iostream>

using namespace std;
int main() {
    char str[80];
    cout<<"Enter the string"<<endl;
    cin.getline(str,80);
    int i,j;

    //finding length of string
    for(i=0;str[i] != '\0';i++);

    //Comparing first element with last element till middle of string 
    for(j=0;(j<i/2 && (str[j] == str[i-j-1]));j++);
    if(j == i/2){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    return 0;

}
