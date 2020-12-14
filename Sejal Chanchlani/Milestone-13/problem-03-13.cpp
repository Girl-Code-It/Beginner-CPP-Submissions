//problem-03-13
#include <iostream>
#include<string>
using namespace std;
 
int main() { 
   string str;
   int count=0;
   getline(cin,str);
   for(int i=0;i<str.length();i++)
   {
   	if(str[i]==' ')
   	{
   		count++;
	   }
   }
   cout<<"words - "<<count+1;
}
