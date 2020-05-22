/*

#include<iostream>
using namespace std;
int main()
{
    char gender, status;
    int age;

     cout<<"enter the gender : ";
     cin>>gender;
     cout<<"marital status : ";
     cin>>status;

        if(gender == 'm' || gender == 'M')
          {
              cout<<"enter the age : ";
              cin>>age;

              if (age<=40 && age>=20)
              {
                      cout<<" you may work anywhere.\n";
              }

              else if (age<=60 && age>=40)
              {
                      cout<<" you will work in urban areas only.\n";
              }
              else
              {
                      cout<<" invalid input.\n";
              }
          }
        else if (gender == 'f')
        {cout<<" you will work in urban areas only.\n";}
        else
        {cout<<"invalid input ";}
    return 0;
}
