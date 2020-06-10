#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; 
	cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) 
	{
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		//hex (which will output the number in hexadecimal format), 
		
		//left (which will align the number to the left), 
		
		//showbase(which will make sure the hexadecimal number has a '0x' at the beginning), 
		
		//nouppercase (which converts all alphabetic hexadecimal values to lowercase).
		
        cout << hex << showbase << nouppercase<<left;
        cout << (long long)A << endl;
        
        //dec: switches numbers from hexadecimal back to decimal.
        
		//right: aligns values to the right instead of the left
		
		//setw(15): sets a fixed width of 15, as the effect from the initial code only impacts the first printed line.
		
		//setfill('_'): by default, when you have a fixed width, if your printed value doesn't fill up the entire length 
		
		//(for example, if you have a width of 15 and only print 7 characters), the extra characters used to pad are whitespaces.
		
		// This function lets you change the padding to whatever character you want.
		
		//showpos: Makes sure there is a plus sign before any positive numbers
		
		//fixed: ensures that number is printed out entirely and that scientific notation isn't used for larger numbers
		
		//setprecision(2): sets the number of decimal places to 2.
		
        cout << setw(15) << showpos << setfill('_') << setprecision(2)<<fixed<<right;
        cout << B << endl;
        
        //scientific: Prints output in scientific notation format
        
		//uppercase: Undoes previous nouppercase manipulator and ensures that the 'E' in the scientific notation is capitalised
		
		//noshowpos: Undoes previous showpos manipulator and gets rid of the plus at the start of positive values
		
		//setprecision: Changes the number of digits after the decimal place from 2 to 9.
        
        cout << scientific << setw(15) << setprecision(9) << uppercase<<noshowpos;
        cout << C << endl;

	}
}
