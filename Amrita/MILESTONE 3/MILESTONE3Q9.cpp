#include<iostream>
using namespace std;
int main ()
{
    int num, rev , n ;
    cout << "ENTER THE NUMBER \n" ;
    cin>>num;
     while (num>0)
     {
         n=num%10;
         rev=(rev*10)+n;
         num/=10;
     }

     while (rev>0)
     {
         switch (rev%10)
         {
         case 0 :
            cout<<"ZERO\t";
            break;
          case 1 :
            cout<<"ONE\t";
            break;
            case 2 :
            cout<<"TWO\t";
            break;
           case 3 :
            cout<<"THREE\t";
            break;
             case 4 :
            cout<<"FOUR\t";
            break;
            case 5 :
            cout<<"FIVE\t";
            break;
             case 6 :
            cout<<"SIX\t";
            break;
             case 7 :
            cout<<"SEVEN\t";
            break;
             case 8 :
            cout<<"EIGHT\t";
            break;
             case 9 :
            cout<<"NINE\t";
            break;

            }
            rev=rev/10;
     }
     return 0;
}
