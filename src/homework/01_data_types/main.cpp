//write include statements
#include <iostream>
#include "data_types.cpp"

//write namespace using statement for cout

using namespace std;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	int num1;
    cout << "Enter a number: ";
    cin >> num1;
	int result = multiply_numbers(num1);
	cout << "The result of multiplying the number with 5 is: " << result << endl;
	

	return 0;
}
