#include <iostream>

using namespace std;

int main()
{
    int marks;

    cout<<"Enter your marks : \n";
    cin>>marks;

    if(marks>=80)

        cout<<"Your grade is A\n";

        else if(marks >= 60 && marks < 80)
            cout<<"Your grade is B\n";

        else if(marks >= 50 && marks < 60)
            cout<<"Your grade is C\n";

        else if(marks >= 45 && marks < 50)
            cout<<"Your grade is D\n";

        else if(marks >= 25 && marks < 45)
            cout<<"Your grade is E\n";

        else
            cout<<"Your grade is F\n";

    return 0;
}
