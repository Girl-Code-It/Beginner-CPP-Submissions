#include <bits/stdc++.h>
#include <algorithm> 
#define NO_OF_CHARS 256
using namespace std;

int areAnagram(char* str1, char* str2)
{
    int count1[NO_OF_CHARS] = { 0 };
    int count2[NO_OF_CHARS] = { 0 };
    int i;
 
    // For each character in input strings, increment count in each
    for (i = 0; str1[i] && str2[i]; i++) {
        count1[str1[i]]++;
        count2[str2[i]]++;
    }
 
    // If both strings are of different length.
    if (str1[i] || str2[i])
        return 0;
 
    // Compare count arrays
    for (i = 0; i < NO_OF_CHARS; i++)
        if (count1[i] != count2[i])
            return 0;
    return 1;
}

int main() 
{
	char str[100][100]; 
	int n,count=0;
	cin>>n;	

	for(int i=0;i<n;i++) //entering strings 
		cin>>str[i];
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		 { if(areAnagram(str[i],str[j])) //incerement count if it is anagram
		  	count++;
			else 
			 break;}
	}

	cout<<count;
	return 0;
}

