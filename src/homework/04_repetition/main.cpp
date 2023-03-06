#include <iostream>
#include "dna.h"
#include "dna.cpp"

using namespace std;

int main()	{
	int choice = 0;
	do	{
		cout << "Menu:" << endl;
        cout << "1-Factorial" << endl;
        cout << "2-Greatest Common Divisor" << endl;
        cout << "3-Exit" << endl;
        cin >> choice;

        switch (choice)	{
			case 1:
				int num;
            	cout << "Enter a number: ";
            	cin >> num;
            	cout << "Factorial of " << num << " is " << factorial(num) << endl;
				break;
			case 2:
				int num1, num2;
            	cout << "Enter two numbers separated by space: ";
            	cin >> num1 >> num2;
            	cout << "Greatest common divisor of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << endl;
            	break;
			case 3:
            	char confirm;
            	cout << "Are you sure you want to exit? (y/n) ";
            	cin >> confirm;
				if (confirm == 'y' || confirm == 'Y')	{
					cout << "Goodbye!" << endl;
					return 0;
					}
				break;
		 	default:
		 		cout << "Invalid choice, please try again." << endl;
		 		break;
			}
	}
	while (choice != '3' && choice != 'y' && choice != 'Y');
	
	return 0;
}
