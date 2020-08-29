  #include<iostream>
  using namespace std;
  
  int taxCalculator(int x, int y) {
    int income, tax;
    if (y <= 100000) {
      income = x - y;
    } else {
      income = x - 100000;
    }
    if (income <= 100000) {
      tax = 0;
    } else if (income > 100000 && income <= 200000) {
      tax = 0.1 * (income - 100000); 		
    } else if (income > 200000 && income <= 500000) {
      tax = 0.2 * (income - 200000) + 10000; 
    } else if (income > 500000) {
      tax = 0.3 * (income - 500000) + 10000 + 60000; 
    }
    return tax;
  }

  main() {
    int gross, total;
    cout << "Enter the gross salary: ";
    cin >> gross;
    cout << "\nEnter the total savings: ";
    cin >> total;
    cout << "\n Tax: " << taxCalculator(gross, total);
  }
