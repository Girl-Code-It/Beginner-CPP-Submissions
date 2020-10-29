#include <iostream>
#include<math.h>
using namespace std;
int main()
{
  long long int num=0, ld=0, rev=0, ct=0, i, tz=0, extra=0;
    cout<<"enter a number : "<<endl;
    cin>> num;
     while (num>0)
    {
        ld=num%10;
        rev=rev*10+ld;
        num=num/10;
        if(ld==0)               
        {
            ct++;
        }
    }
        while(rev>0)
        {
            switch (rev%10)
           {
            case 0:
            cout<<"zero ";
            extra++;               //for counting extra zeros.
            break;
            case 1:
            cout<<"one ";
            break;
            case 2:
            cout<<"two ";
            break;
            case 3:
            cout<<"three ";
            break;
            case 4:
            cout<<"four ";
            break;
            case 5:
            cout<<"five ";
            break;
            case 6:
            cout<<"six ";
            break;
            case 7:
            cout<<"seven ";
            break;
            case 8:
            cout<<"eight ";
            break;
            default:
            cout<<"nine ";
           }
           rev=rev/10;
       }
       tz=ct-extra;              //tz=trailing zeros
    for(i=1; i<=tz; i++)
    {
        cout<<"zero ";         //prints no. of trailing zeros.
    }
    return 0;
}
