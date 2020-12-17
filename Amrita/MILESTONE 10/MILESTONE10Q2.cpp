// PROGRAM TO CALCULATE DIAMETER, CIRCUMFERENCE,AREA OF A CIRCLE WITH A GIVEN RADIUS

#include<iostream>
using  namespace std;

 void circle (float r)
 {
     float diameter = 2*r;
     float circumference=2*3.14*r;
     float area = 3.14*r*r;
     cout<<"THE DIAMETER , CIRCUMFERENCE AND AREA OF THE CIRCLE ARE AS FOLLOWS \n"<<"DIAMETER= "
     <<diameter<<"   CIRCUMFERENCE = "<<circumference <<"  AREA ="<<area;

 }

int main ()
 {
     float radius;
     cout<<"ENTER THE RADIUS OF THE CIRCLE TO OBTAIN OTHER DETAILS \n";
     cin>>radius;
     circle(radius);
     return 0;}

