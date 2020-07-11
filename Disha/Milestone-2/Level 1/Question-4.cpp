//A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
//Ask user for their salary and year of service and print the net bonus amount.
 using namespace std;
 #include<iostream>
  int main()
  {
      float year,sal;

      cout<<" Enter your salary :";
      cin>>sal;

      cout<<"\n Enter your year of service :";
      cin>>year;

      if(year>5){
            cout<<"\n Congratulation, You got a bonus of Rs."<<0.05*sal;
      }
      else{
        cout<<"\n No,bonus.Insufficient work experience";
      }

      return 0;

  }
