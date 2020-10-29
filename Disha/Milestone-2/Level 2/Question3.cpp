//A 4 digit number is entered through keyboard. Write a program to print a new number with digits reversed as of original one
 using namespace std;
 #include<iostream>
 int main()
 {
    int num,n,new_num=0;
    cout<<"\n Enter a four-digit number :";
    cin>>num;

    while(num>0)
    {
        n=num%10;
        new_num=new_num*10+n;
        num=num/10;
    }
    cout<<"\n New number ="<<new_num<<endl;
    return 0;
 }
