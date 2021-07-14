//find subsets of a string using recursion or powerset
#include <bits/stdc++.h> 
using namespace std; 
  
  
void powerSet(string str, int index = 0, string curr = "") 
{ 
	cout<<curr<<endl;
    int n = str.length(); 
	if (index == n) { 
        cout <<curr<< endl; 
        return; 
    } 
  
    // Two cases for every character , one in which character is a part of current subset 
    //  and other in which character is not a part of current subset 
    powerSet(str, index + 1, curr + str[index]); 
    powerSet(str, index + 1, curr); 
} 
  
int main() 
{ 
    string str;
	cin>>str; 
    powerSet(str); 
    return 0; 
} 
