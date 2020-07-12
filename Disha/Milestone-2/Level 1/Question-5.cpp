/* A school has following rules for grading system:
a. Below 25 - F
b. 25 to 45 - E
c. 45 to 50 - D
d. 50 to 60 - C
e. 60 to 80 - B
f. Above 80 - A
Ask user to enter marks and print the corresponding grade.*/

using namespace std;
 #include<iostream>
  int main()
  {
      float marks;
      cout<<"\n Enter your marks :";
      cin>>marks;

      if(marks<25){
        cout<<"\n Grade='F'";
      }
      else if(marks>=25&&marks<45){
        cout<<"\n Grade='E'";
      }
      else if(marks>=45&& marks<50){
        cout<<"\n Grade='D'";
      }
      else if(marks>=50&& marks<60){
        cout<<"\n Grade='C'";
      }
      else if(marks>=60&&marks<80){
        cout<<"\n Grade='B'";
      }
      else if(marks>=80){
        cout<<"\n Grade='A'";
      }

      return 0;
  }

