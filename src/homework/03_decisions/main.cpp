#include "decisions.h"
#include <iostream>
#include "decisions.cpp"

using namespace std;

int main()	{
	int choice = 0;
	int grade = 0;
	cout << "MAIN MENU\n\n";
	cout << "1-Letter grade using if\n";
	cout << "2-Letter grade using switch\n";
	cout << "3-Exit\n\n";
	cout << "Enter your choice (1-3): ";
	cin >> choice;
	switch (choice)	{
		case 1:
		cout << "Enter a numerical grade (0-100): ";
		cin >> grade;
		if (grade >= 0 && grade <= 100)	{
			cout << "Letter grade using if: "<< get_letter_grade_using_if(grade)<< endl;
			}
			else	{
				cout << "Error: grade must be between 0 and 100\n";
				}
				break;
				case 2:
				cout << "Enter a numerical grade (0-100): ";
				cin >> grade;
				if (grade >= 0 && grade <= 100)	{
					cout << "Letter grade using switch: "<< get_letter_grade_using_switch(grade)<< std::endl;
					}
					else	{
						cout << "Error: grade must be between 0 and 100\n";
						}
						break;
				case 3:
				cout << "Goodbye!\n";
				break;
				default:
				cout << "Error: invalid choice\n";
				break;
				}
	return 0;
	}