#include<iostream>
using namespace std;
int main()
{
    char str[80];
    cout<<"enter a string: ";
    cin.getline(str, 80);
    int i=0,j=0,l,temp;
    for(l=0;str[l]!='\0';l++);
    for(i=0,j=l-1;i<l/2;i++,j--)
    {
       temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    cout<<"Reversed string is:"<<str<<endl;
    return 0;
}
