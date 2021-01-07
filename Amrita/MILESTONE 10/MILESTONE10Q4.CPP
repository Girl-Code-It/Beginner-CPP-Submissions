// PROGRAM TO CHECK WHETHER A NUMBER IS EVEN OR ODD

#include<iostream>
using namespace std;

 void check (int n)
 {
     if (n%2==0)
        cout<<"\n THE  NUMBER IS EVEN ";
     else
        cout<<"\n THE  NUMBER IS ODD ";
 }

  int main ()
  {
      int num;
      cout<<"\n ENTER THE NUMBER TO CHECK WHETHER A NUMBER IS EVEN OR NOT  ";
      cin>>num;
      check(num);
      return 0;
  }


