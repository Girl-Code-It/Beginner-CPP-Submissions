//Ask user to enter age, sex ( M or F ), marital status ( Y or N ) and then using following rules print their place of service.
 using namespace std;
 #include<iostream>
 int main()
 {
    int age;
    char sex,status;
    cout<<"\n Enter the sex of a person :";
    cin>>sex;

    cout<<"\n Enter person's age :";
    cin>>age;

    cout<<"\n Enter marital status(if married type Y else type N) :";
    cin>>status;

    if(sex=='F')
    {
        cout<<"\n Place of service:- Urban areas only \n";
    }
    else if(sex=='M' && (age>20 && age<40))
    {
        cout<<"\n Place of service:- He can work anywhere \n";
    }
    else if(sex=='M'&& (age>=40 && age<=60))
    {
        cout<<"\n Place of service:-Urban areas only \n";
    }
    else{
        cout<<"\n ERROR! Wrong input";
    }
    return 0;
 }


