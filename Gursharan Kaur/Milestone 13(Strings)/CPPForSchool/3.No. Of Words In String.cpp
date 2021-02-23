#include<iostream>
using namespace std;
int main()
{   char str[80];
    cout<<"Enter string: ";
    cin.getline(str, 80);
    int n=1,i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            n++;
        }
    }
    cout<<"no. of words are:"<<n<<endl;
    return 0;
}
