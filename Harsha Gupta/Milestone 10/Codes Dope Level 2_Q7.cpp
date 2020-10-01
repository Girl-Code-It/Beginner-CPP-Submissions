#include <iostream>

using namespace std;

int leapornot(int year) {
  if ((year % 4 == 0) && (year % 100 == 0) || (year % 400 == 0))
    return 1;
  else
    return 0;
}

void calc_age(int d1, int m1, int y1, int d2, int m2,int y2) {
  int day_diff = 0;
  int day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (y2 > y1) {
    if (m1 == 2) {
      if (leapornot(y1) == 1) {
        day_diff += 29 - d1;
      } else {
        day_diff += 28 - d1;
      }
    } else {
      day_diff = day[m1 - 1] - d1;
    }
    m1++;

    for (int i = m1; i <= 12; i++) {
      if (i == 2) {
        if (leapornot(y1) == 1) {
          day_diff += 29;
        } else {
          day_diff += 28;
        }
      } else {
        day_diff += day[i - 1];
      }
    }
    y1++;

    for (int i = y1; i < y2; i++) {
      if (leapornot(i) == 1) {
        day_diff += 366;
      } else {
        day_diff += 365;
      }
    }


    for (int i = 1; i < m2; i++) {
      if (i == 2) {
        if (leapornot(y2) == 1) {
          day_diff += 29;
        } else {
          day_diff += 28;
        }
      } else {
        day_diff += day[i - 1];
      }
    }

    day_diff += d2;
    cout << "\nAge:"<<day_diff<<" days";
  } else if (y1 == y2) {
    if (m2 > m1) {
      if (m1 == 2) {
        if (leapornot(y1) == 1) {
          day_diff += 29 - d1;
        } else {
          day_diff += 28 - d1;
        }
      } else {
        day_diff = day[m1 - 1] - d1;
      }
      m1++;
      for (int i = m1; i < m2; i++) {
        if (i == 2) {
          if (leapornot(y1) == 1) {
            day_diff += 29;
          } else {
            day_diff += 28;
          }
        } else {
          day_diff += day[i - 1];
        }
      }

      day_diff += d2;
      cout << "\nAge:"<<day_diff<<" days";
    } else if (m1 == m2) {
      if (d2 > d1) {
        cout << "\nAge:"<<d2-d1<<" days";
      } else if (d1 == d2) {
        cout<<"\n Zero Days";
      } 
    } 
  } 
}

int main() {
  int d1, m1, y1;
  int d2, m2, y2;
  cout << "\nEnter your birth date in DD MM YYYY format:";
  cin >> d1 >> m1 >> y1;
  cout << "\nEnter the current date in DD MM YYYY format:";
  cin >> d2 >> m2 >> y2;
  calc_age(d1, m1, y1, d2, m2, y2);
  return 0;
}

