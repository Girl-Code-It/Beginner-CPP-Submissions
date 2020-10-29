
// Recursive Program to remove consecutive 
// duplicates from string S. 
#include <bits/stdc++.h>
using namespace std;
// A recursive function that removes  
// consecutive duplicates from string S 
void removeConsecutiveDuplicates(char *input) {
    // When string is empty, return 
	if(strlen(input)==0){
        return;
    }
     // if the adjacent characters are same 
    if(input[0]==input[1]){
         // Shift character by one to left 
        int i=0;
        while(input[i]!='\0'){
            input[i]=input[i+1];
            i++;
        }
        // Check on Updated String S
        removeConsecutiveDuplicates(input);
    }
     // If the adjacent characters are not same 
    // Check from S+1 string address 
    removeConsecutiveDuplicates(input+1);
}
int main() {
    char input1[100];
    cin>>input1;
    removeConsecutiveDuplicates(input1);
    cout<<input1;
}
