#include<iostream>
using namespace std;
int main()
{
int character=0;
char ch ='a';
do
{ character=int(ch);
cout<<ch<<" ";
character++;
ch=(character);
}
while(ch<='z');
}
