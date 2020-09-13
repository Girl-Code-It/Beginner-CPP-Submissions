#include <iostream>
using namespace std;
void grade (int a)
{
    char grade[] = "";
    if (a >91 && a <= 100)
     {
         grade[0] = 'A';
         grade[1] = 'A';
         grade[2] = '\0';
     }
    else if (a >81 && a <= 900)
     {
         grade[0] = 'A';
         grade[1] = 'B';
         grade[2] = '\0';
     }
    else if (a >71 && a <= 80)
     {
         grade[0] = 'B';
         grade[1] = 'B';
         grade[2] = '\0';
     }
    else if (a >61 && a <= 70)
     {
         grade[0] = 'B';
         grade[1] = 'C';
         grade[2] = '\0';
     }
    else if (a >51 && a <= 60)
     {
         grade[0] = 'C';
         grade[1] = 'D';
         grade[2] = '\0';
     }
    else if (a >41 && a <= 50)
     {
         grade[0] = 'D';
         grade[1] = 'D';
         grade[2] = '\0';
     }
    else
     {
         grade[0] = 'F';
         grade[1] = 'A';
         grade[2] = 'I';
         grade[3] = 'L';
         grade[4] = '\0';
     }
    cout << "Your grade is : " << grade;
}
int main ()
{
    int num;
    cout << "Enter your marks: ";
    cin >> num;
    grade (num);
}
