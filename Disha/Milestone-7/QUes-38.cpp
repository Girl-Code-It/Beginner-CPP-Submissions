//Write a program to find two's complement of a binary number.
 using namespace std;
 #include<iostream>
 #include<string>
 int main()
 {
     string binary,new_num;
     cout<<"\n Enter a binary number :";
     getline(cin,new_num);
     binary=new_num;
     int len=binary.length()-1;
     //Finding 1's compliment
     while(len>=0)
     {
         if(binary[len]=='1')
         {
             binary[len]='0';
         }
         else if(binary[len]=='0')
         {
             binary[len]='1';
         }
         len--;
     }
    // Find two's compliment
    int carry=1;
    for(int i=(binary.length()-1) ;i>=0;i--)
    {
        if(binary[i]=='0' && carry==1)
        {
            binary[i]='1';
            carry=0;
        }
        else if(binary[i]=='1' && carry==1)
        {
            binary[i]='0';
            carry=1;
        }

    }

    cout<<"\n Two's complement ="<<binary;

     return 0;
 }
