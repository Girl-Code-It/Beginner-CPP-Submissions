#include<iostream>
#include<unordered_map>
using namespace std;


void FindOccurance(int arr[],int size)
{
    unordered_map<int,int>m;

    for(int i=0; i<size; i++)
        m[arr[i]]++;

    int odd_count = 0,even_count = 0;

    for(int i=0; i<size; i++)
    {
        if(m.find(arr[i]) != m.end())
        {
            if(m[arr[i]] & 1)
                odd_count++;
            else
                even_count++;
        }

        m.erase(arr[i]);
    }

    cout << odd_count << " " << even_count;
}