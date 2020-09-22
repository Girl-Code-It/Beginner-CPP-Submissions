// PROGRAM TO CHECK WHETHER AN ALPHABET IS UPPERCASE OR LOWER CASE


  #include<iostream>
  using namespace std;
  int main()
{

    char alp;
    cout<<"ENTER AN ALPHABET \n";
    cin>>alp;
    if(alp>='a' || alp<='z')
        cout<<"IT IS A LOWER CASE  ALPHABET \n";
    else if (alp>='A' || alp<='Z')
        cout<<"IT IS AN  UPPER CASE ALPHABET \n";
         else
            cout<<"NOT AN ALPHABET ";
         return 0;
}
