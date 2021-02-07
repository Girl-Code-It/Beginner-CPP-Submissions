//https://codezen.codingninjas.com/practice/470/745/remove-duplicates

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


vector<int> removeDuplicates(vector<int> input){

    // Write your code here
    vector<int> v;
    unordered_map<int,int> m;
    int n = input.size();
    for(int i=0;i<n;i++){
        m[input[i]]++;
        if(m[input[i]] == 1)
            v.push_back(input[i]);
    }

    return v;
}
