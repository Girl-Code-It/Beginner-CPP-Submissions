//https://codezen.codingninjas.com/practice/470/746/first-non-repeating-character

#include<iostream>
#include<cstring>
#include<unordered_map>
using namespace std;


char nonRepeatingCharacter(string str){
  
  //Write your code here
    unordered_map<char,int> m;
    int n = str.length();
    for(int i=0;i<n;i++){
        m[str[i]]++;
    }
    for(int i=0;i<n;i++){
        if(m[str[i]] == 1){
            return str[i];
            break;
        }
    }
    return str[0];
}


