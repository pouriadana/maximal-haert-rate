/* Calculates MHR for an age */
#include <iostream>

using std::cout;
using std::cin;

int main()
{
	cout << "Please enter your age: ";
	int age{ 0 };
	cin >> age;

	cout << "Maximal heart rates by formula used: \n";
	cout << "MHR = 220 - age:\t" << 220 - age << "\n";
	cout << "MHR = 208 - (0.7)age:\t" << 208 - 0.7 * age << "\n";
	cout << "MHR = 207 - (0.7)age:\t" << 207 - 0.7 * age << "\n";
	cout << "MHR = 211 - (0.64)age:\t" << 211 - 0.64 * age << "\n";

	// calculate range of lowest and highest
	int smallest{ 0 }, largest{ 0 };
	int f1{ 0 }, f2{ 0 }, f3{ 0 }, f4{ 0 };
	f1 = 220 - age;
	f2 = 208 - 0.7 * age;
	f3 = 207 - 0.7 * age;
	f4 = 211 - 0.64 * age;

	smallest = f1;
	largest = f1;

	if (f2 < smallest)
	{
		smallest = f2;
	}
	if (f2 > largest)
	{
		largest = f2;
	}

	if (f3 < smallest)
	{
		smallest = f3;
	}
	if (f3 > largest)
	{
		largest = f3;
	}

	if (f4 < smallest)
	{
		smallest = f4;
	}
	if (f4 > largest)
	{
		largest = f4;
	}

	// print final result
	cout << "\n";
	cout << "Suggested range for MHR is:\t" << smallest << " to " << largest << "\n";
}