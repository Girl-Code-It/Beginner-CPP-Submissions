#include<iostream>
using namespace std;
int main()
{
    char str1[80],str2[80];
    int l;
    cout<<"enter main string";
    cin.getline(str1, 80);
    cout<<"enter sub string";
    cin.getline(str2, 80);
    for(l=0;str2[l]!='\0';l++);
    int i,j;
    for(i=0,j=0;str1[i]!='\0'&&str2[j]!='\0';i++)
    {
        if(str1[i]==str2[j])
        { j++;
        }
        else
        {
            j=0;
        }
    }
    if(j==l)
        cout<<"substring found at"<<i-j+1;
    else
        cout<<"substring not found";
    return 0;
}
