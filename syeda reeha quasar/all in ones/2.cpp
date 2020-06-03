#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // // answer 1 to find square or not
    // float a,b;
    // cout<<"enter no. 1"<<endl;
    // cin>>a;
    // cout<<"enter no. 2"<<endl;
    // cin>>b;
    // if(a==b){
    //     cout<<"this is a square";
    // }
    // else{
    //     cout<<"not a square";
    // }

    // //answer 2
    // int a, b;
    // cout << "enter no. 1" << endl;
    // cin >> a;
    // cout << "enter no. 2" << endl;
    // cin >> b;
    // if (a == b)
    // {
    //     cout << "equal";
    // }
    // else if (a > b)
    // {
    //     cout << a << " is greater i.e no. 1" << endl;
    // }
    // else
    // {
    //     cout << b << " is greater i.e. no. 2" << endl;
    // }

    // //answer 3
    // int a;
    // int b=100;
    // cout<<"cost of each unit is 100 enter the quantity u want to purchase"<<endl;
    // cin>>a;
    // cout<<"the total cost is ";
    // int c;
    // float d;
    // c = a*b;
    // d= c-0.1*c;
    // if(c>1000){
    //     cout<< d;
    // }
    // else{
    //     cout<<c;
    // }

    // //answer 4
    // int a,b;
    // float c;
    // cout<<"enter your salary"<<endl;
    // cin>>a;
    // cout<<"enter your years of service"<<endl;
    // cin>>b;
    // c= a + 0.05*a;

    // if(b>5){
    //     cout<<"your salary will be increased"<<endl;
    //     cout<<"now your salary is "<<c;
    // }
    // else{
    //     cout<<"you didn't get increment"<<endl;
    //     cout<<"your salary is "<<a;
    // }

    //answer 5
    //

    // answer 6
    // int a, b, c;
    // cout << "enter the age of  1 person" << endl;
    // cin >> a;
    // cout << "enter the age of  2 person" << endl;
    // cin >> b;
    // cout << "enter the age of  3 person" << endl;
    // cin >> c;

    // if (a > b && a >c && c > b)
    // {
    //     cout << "1 is the oldest and 2 is the youngest";
    // }
    // else if (a > b && a > c && c < b)
    // {
    //     cout << "1 is the oldest and  3 is the youngest";
    // }
    // else if (a > b && a < c && c > b)
    // {
    //     cout << "3 is the oldest and  2 is the youngest";
    // }
    // else if (a < b && a < c && c < b)
    // {
    //     cout << "2 is the oldest and  1 is the youngest";
    // }
    // else if (a < b && c > a && c > b)
    // {
    //     cout << "3 is the oldest and 1 is the youngest";
    // }
    // else if (b > c && b > a && c < a)
    // {
    //     cout << "2 is the oldest and  3 is the youngest";
    // }

    //part b
    // int a,b,c;
    // cin>>a>>b>>c;
    // int old, young;

    // if (a >= b && a >= c && c >= b)
    // {
    //    old=a;
    //    young=b;
    // }
    // else if (a >= b && a >= c && c <= b)
    // {
    //     old=a;
    //    young=c;
    // }
    // else if (a <= b && a <= c && c <= b)
    // {
    //     old=b;
    //    young=a;
    // }
    // else if (a >= b && a <= c && c >= b)
    // {
    //     old=c;
    //    young=b;
    // }
    // else if (a <= b && c >= a && c >= b)
    // {
    //     old=c;
    //    young=a;
    // }
    // else if (b >= c && b >= a && c <= a)
    // {
    //     old=b;
    //    young=c;
    // }

    // if(old != young){
    //     cout<<"oldest: "<<old<<endl;
    //     cout<<"youngest: "<<young<<endl;
    // } else {
    //     cout<<"ages of all persons are equal";
    // }

    // answer 8
    //         int a,b;
    //     cout<<" enter your Number of classes held"<<endl;
    //     cin>> a ;
    //     cout<<" enter your Number of classes attended"<<endl;
    //     cin>> b ;
    //     float c,d;
    //     d= (1.0) * b/a ;
    //     c= d*100;
    //     cout<<"your attendence is "<<c<<endl;
    //     if(c>=75){
    // cout<<"you are elligible to give exam";
    //     }
    //     else{
    //         cout<<"you are not elligible to sit in exam";
    //     }

    //answer 7
    // int a;
    // cout<<"enter the no.";
    // cin>>a;
    // if(a<0){
    //     cout<< a*(-1);
    // }
    // else {
    //     cout<<a;
    // }

    // answer 9
    // int a, b;
    // cout << " enter your Number of classes held" << endl;
    // cin >> a;
    // cout << " enter your Number of classes attended" << endl;
    // cin >> b;
    // float c, d;
    // char x;
    // d= (1.0) * b/a ;
    // c = d * 100;

    // cout << "your attendence is " << c << endl;
    // if (c >= 75)
    // {
    //     cout << "you are elligible to give exam";
    // }
    // else
    // {
    //     cout << "do you have medical cause (type y or n)";
    //     cin >> x;
    //     if (x == 'y')
    //     {
    //         cout << "you are eligible to give a retest";
    //     }
    //     else
    //     {
    //         cout << "you are not elligible to sit in exam";
    //     }
    // }

    //or

// int a, b;
//     cout << " enter your Number of classes held" << endl;
//     cin >> a;
//     cout << " enter your Number of classes attended" << endl;
//     cin >> b;
//     float c, d;
//     bool x;
//     d= (1.0) * b/a ;
//     c = d * 100;

//     cout << "your attendence is " << c << endl;
//     if (c >= 75)
//     {
//         cout << "you are elligible to give exam";
//     }
//     else
//     {
//         cout << "do you have medical cause (for yes (1)and for no(0))"<<endl;
//         cin >> x;
//         if (x == true)
//         {
//             cout << "you are eligible to give a retest";
//         }
//         else
//         {
//             cout << "you are not elligible to sit in exam";
//         }
//     }

    // answer 10
//     int x,y,z;
//     x=2;
//     y=5;
//     z=0;
//     cout<<"x==2"<<endl;
// if(x==2){
    
//     cout<<"true"<<endl;
// }
// else {
//     cout<<"false"<<endl;
// }
// cout<<"x != 5"<<endl;
// if (x != 5){
    
//     cout<<"true"<<endl;
// }
// else {
//     cout<<"false"<<endl;
// }
// cout<<" x != 5 && y>=5 ";
// if(x != 5 && y>=5){
//     cout<<"true"<<endl;
// }
// else {
//     cout<<"false"<<endl;
// }
// cout<<" z ! = 0 || x== 2 ";
// if(z =! 0 || x== 2){
//     cout<<"true"<<endl;
// }
// else {
//     cout<<"false"<<endl;
// }
// cout<<" !(y<10) ";
// if( !(y<10)){
//     cout<<"true"<<endl;
// }
// else {
//     cout<<"false"<<endl;
// }
  
  //or
      int x,y,z;
    x=2;
    y=5;
    z=0;
    cout<<(x==2)<<endl;
    cout<<( x != 5)<<endl;
     cout<< (x != 5 && y>=5) <<endl;
     cout<< ((z != 0) || x== 2) <<endl;
     cout<< (!(y<10)) <<endl;
    

// answer 11
//  char c;
   
//    cout<< "Enter a character "<<endl;
//    cin>> c;

//    if (c>64 && c<91)
//    {
//          cout<<"It is uppercase character";   
//    }     
//     else
//    {
//         cout<<"It is in lowercase character";
//    }

    return 0;
}