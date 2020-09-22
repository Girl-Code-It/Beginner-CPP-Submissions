// PROGRAM TO PROVIDE 10% DISCOUNT IF PURCHASE IS GREATER THAN 1000

#include<iostream>
using namespace std;
int main()
{
    float unit;
    cout<<"ENTER THE AMOUNT OF UNIT YOU WANT TO PURCHASE \n ";
    cin>>unit;
    float cost=100*unit;
    if(cost>1000)
       {

        cost=cost-0.01*cost;
        cout<<"YOU GET ADDITIONAL 10% DISCOUNT BECAUSE YOUR PURCHASE IS GREATER THAN 1000  ";



}


cout<<"\nTHE TOTAL COST IS  "<<cost;
return 0;
}
