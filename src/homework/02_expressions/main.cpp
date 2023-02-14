//write include statements

#include <iostream>
#include "hwexpressions.cpp"

//write namespace using statement for cout

using namespace std;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/

int main()
{
double meal_amount, tip_rate, tip_amount, tax_amount, total;

cout << "Enter meal amount: ";
cin >> meal_amount;

tax_amount = get_sales_tax_amount(meal_amount);

cout << "Enter tip rate in (%): ";
cin >> tip_rate;

tip_amount = get_tip_amount(meal_amount, tip_rate);

total = meal_amount + tax_amount + tip_amount;

cout << endl;
cout << "Meal Amount: " << meal_amount << endl;
cout << "Sales Tax: " << tax_amount << endl;
cout << "Tip Amount: " << tip_amount << endl;
cout << "Total: " << total << endl;

//test
return 0;
}