//If x = 2 y = 5 z = 0 then find values of the following expressions: a. x == 2 b. x != 5 c. x != 5 && y >= 5 d. z != 0 || x == 2 e. !(y < 10)
using namespace std;
 #include<iostream>
  int main()
  {
      int x = 2, y = 5 ,z = 0;

      cout <<"\n True=1 \t False=0 \n ";
      if(x==2){
        cout<<true<<endl;
      }
      else{
        cout<<false<<endl;
      }
      if(x!=5){
        cout<<true<<endl;
      }
      else{
            cout<<false<<endl;
      }
      if(x != 5 && y >= 5){
        cout<<true<<endl;
      }
      else{
            cout<<false<<endl;
      }
      if( z != 0 || x == 2){
        cout<<true<<endl;
      }
      else{
            cout<<false<<endl;
      }
       if(!(y < 10)){
        cout<<true<<endl;
      }
      else{
            cout<<false<<endl;
      }



      return 0;
  }

