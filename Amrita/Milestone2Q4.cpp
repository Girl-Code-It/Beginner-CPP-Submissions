// PROGRAM TO PROVIDE 5% INCREMENT IF YEAR OF SERVICE IS GREATER THAN 5 YEARS

#include<iostream>
using namespace std;
int main()
{
    float servyear,salary;
    cout<<"ENTER YOUR SALARY \n ";
    cin>>salary;
    cout<<"ENTER THE YEAR WITH WHICH YOU ARE ASSOCIATED WITH THE COMPANY  \n";
    cin>>servyear;
    if(servyear>5)
       {

        salary+=0.05*salary;
        cout<<"YOU GET ADDITIONAL 5% INCREMENT BECAUSE YOU ARE ENROLLED FOR MORE THAN 5 YEARS  ";



}


cout<<"\nTHE TOTAL SALARY IS  "<<salary;
return 0;
}

