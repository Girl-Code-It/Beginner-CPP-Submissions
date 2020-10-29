// TO PRINT GRADE OF A STUDENT

#include<iostream>
using namespace std;
int main()


{
    float marks;

     input:
    cout<<"ENTER YOUR MARKS OUT OF 100 \n";
    cin>>marks;
    if(marks>100 || marks <0)
        {cout<<"INVALID MARKS !!! \n";
        goto input;

}
else if (marks<25)
cout<<"YOUR GRADE IS 'F'\n";
else if (marks>25&& marks <45)
cout<<"YOUR GRADE IS 'E'\n";
else if (marks>45&& marks<50)
cout<<"YOUR GRADE IS 'D'\n";
else if (marks<60&& marks>50)
cout<<"YOUR GRADE IS 'C'\n";
else if (marks<80&& marks >60)
cout<<"YOUR GRADE IS 'B'\n";
else if (marks>80)
cout<<"YOUR GRADE IS 'A'\n";

return 0;
}


