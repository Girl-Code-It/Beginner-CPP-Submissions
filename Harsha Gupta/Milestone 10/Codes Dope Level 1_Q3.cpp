#include<iostream>
using namespace std;

float circum(int x) {
  return 2*3.14*x;
}

float area(int y) {
	return 3.14*y*y;
}

int main() {
  int r;
  cout << "\n Enter radius of circle:";
  cin >> r;
  cout << "\n Circumference:" << circum(r);
  cout<<"\n Area:" << area(r);
  return 0;
}
