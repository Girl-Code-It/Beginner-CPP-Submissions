#include<iostream>
using namespace std;
int main()
{
    int k=3;
  for (int i=0;i<5;i++)
  {
      k++;

      for (int j=0;j<5;j++)
      {

          if (i+j<=4)
          {
              if(i%2==0)
              {

                  cout<<(j+1);
               }

               else
               {

                    --k;
                   cout<<k;

               }
          }
          else
          {
              cout<<" ";
          }
      }


  cout<<endl;
  }
}
