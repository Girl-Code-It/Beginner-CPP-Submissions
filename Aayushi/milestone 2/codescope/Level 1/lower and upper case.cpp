#include<iostream>
using namespace std;
int main()
{
    char a;

        cout<<"enter a character : ";
        cin>>a;

              if (a<=90 && a>=65)
              {
                      cout<<" entered character is in uppercase .\n";
              }

              else if (a<=122 && a>=97)
              {
                      cout<<" entered character is in lower case .\n";
              }
              else
              {
                      cout<<" invalid input.\n";
              }

    return 0;
}

