//https://codezen.codingninjas.com/practice/470/747/maximum-distance

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


int maxDistance(vector<int> input){

  // Write your code here
    unordered_map<int,int> m;
    int i = 0,ans = 0;
    
    while(i < input.size()){
        
        if(m.find(input[i]) == m.end()){
            m[input[i]] = i;
        }
              else{
                  int len = i - m[input[i]];
                  if(len > ans)
                      ans = len;
              }
        i++;
    }
    
    return ans;
}


