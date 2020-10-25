//Alice and Strings
//Two strings A and B comprising of lower case English letters are compatible if they are equal or can be made equal 

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<ctype.h>     //  strcmp, strcmpi, strcpy
#include<conio.h>
#include<stdio.h> 

using namespace std;

int equals(char s1[80], char s2[80])
{
	int len;int d[80]= { 0 }; 
	len=strlen(s1);
	
	for (int i = 0; i < len; i++) 
	{ 
  
        if (s1[i] > s2[i]) 
            return 0; 
  
        else { 
  
            d[i] = s2[i]-s1[i]; 
        } 
    } 
    
	for (int i = 0; i < len-1; i++)
	{
	if(d[i]<d[i+1])
    return 0;
    }
    
	return 1;
}


int main()
{
	char str1[80],str2[80]; int m;
	
	cout<<"Enter the string A "<<endl;
	gets(str1);
	
	cout<<"Enter the string B "<<endl;
	gets(str2);
	
    m=equals(str1,str2);
    
    if(m==1)
    cout<<"YES ,they are equals";
    
	else
	cout<<"NO.they are not equals";
	

	getch();
	return 0;
}

