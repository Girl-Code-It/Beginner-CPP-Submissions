#include <iostream>
using namespace std;
void findage(int cd, int cm, int cy, int bd, int bm, int by)
{
	int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (bm > cm)
	{
		cy = cy - 1;
		cm = cm + 12;
	}
	cout << "present age is" << (cy - by) << " " << (cm - bm) << " " << (cd - bd) << endl;
}
int main()
{
	int cd, cm, cy, bd, bm, by;
	cout << "enter the current date, month, year  and birth date,  month,year:";
	cin >> cd >> cm >> cy >> bd >> bm >> by;
	findage(cd, cm, cy, bd, bm, by);
	return 0;
}
