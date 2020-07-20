// https://codezen.codingninjas.com/practice/470/747/maximum-distance

#include<bits/stdc++.h>
using namespace std;

int maxDistance(vector<int> v){
    unordered_map<int,int>m ;
    int max_distance = 0 ;
    for(int i = 0 ; i < v.size() ; i++)
    {
        if(m.find(v[i]) == m.end()) // cant find v[i] in the map means its first occ of v[i] 
            m[v[i]] = i ;
        else
            max_distance = max (max_distance , i - m[v[i]]) ; // i - m[v[i]] is the max distance..
    }
    return max_distance ;
}

