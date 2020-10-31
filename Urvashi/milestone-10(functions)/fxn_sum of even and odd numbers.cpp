#include <iostream>
using namespace std;

int printsumofeven(int start, int end)
{
   if (start > end)
      return 0;
   else
      return start + printsumofeven(start + 2, end);
}

int printsumofodd(int start, int end)
{
   if (start > end)
      return 0;
   else
      return start + printsumofodd(start + 2, end);
}

int main()
{
   int start, end, sum1, sum2;
   cout << "enter upper and lower limit:";
   cin >> start >> end;
   sum1 = printsumofeven(start, end);
   sum2 = printsumofodd(start, end);
   cout << "sum of even nos" << sum1 << endl;
   cout << "sum of odd nos" << sum2 << endl;
   return 0;
}
