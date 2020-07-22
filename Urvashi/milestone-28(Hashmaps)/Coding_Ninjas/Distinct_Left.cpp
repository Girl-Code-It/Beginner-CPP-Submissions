#include<bits/stdc++.h>
using namespace std ;

int FindDistinctCount(int *arr, int n,int k) {
    map<int,int>m;
    
    for(int i = 0 ; i < n ; i++)
    {
        if(m.find(arr[i]) == m.end())
            m[arr[i]] = 1 ;
        else
            m[arr[i]]++ ;
    }
    priority_queue<pair<int,int>>p;
    map<int,int> :: iterator it ;
    
    for(it = m.begin() ; it != m.end() ; it++)
    {
        p.push(make_pair(it->first , it->second)) ;
    }
    
    for(int i = 0 ; i < k && !m.empty() ; i++)
    {
        pair<int,int>temp = p.top() ;
        if(temp.second != 1)
        {
            temp.second-- ;
            p.pop() ;
            p.push(temp) ;
        }
        else
        {
            p.pop() ;
            m.erase(temp.first) ;
        }
    }
    return m.size() ;
}
