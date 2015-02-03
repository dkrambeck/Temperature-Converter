// Temperature Conversion Program 

#include <iostream>
#include <iomanip>

int main()
{
	using namespace std;

	double celsius, fahrenheit;

	cout << "What is the desired temperture in Fahrenheit: ";
	cin >> fahrenheit;
	celsius = 5.0 / 9.0 * (fahrenheit - 32.0);
	cout << "For a Fahrenheit temperature of " << fahrenheit;
	cout << " degrees," << endl;
	cout << "The equivalent Celsius temperature is " << celsius;
	cout << " degrees." << endl;
	system("pause");

	cout << "What is the desired temperture in Fahrenheit, or type '-999' to exit: ";
	cin >> fahrenheit;
	while (fahrenheit != -999)
	{
		celsius = 5.0 / 9.0 * (fahrenheit - 32.0);
		cout << "For a Fahrenheit temperature of " << fahrenheit;
		cout << " degrees," << endl;
		cout << "The equivalent Celsius temperature is " << celsius;
		cout << " degrees." << endl;
		cout << "What is the desired temperture in Fahrenheit, or type '-999' to exit: ";
		cin >> fahrenheit;
	}
		return 0;
}

