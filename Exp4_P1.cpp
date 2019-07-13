#include <iostream>
#include <conio.h>
using namespace std;

// Function for addition
int addition (int a, int b)
{
	int c;
	c = a + b;
	return c;
}

// Function for subtraction
int subtraction (int a, int b)
{
	int c;
	c = a - b;
	return c;
}

// Function for multiplication
int multiply (int a, int b)
{
	int c;
	c = a * b;
	return c;
}

// Function for division
int divide (int a, int b)
{
	int c;
	c = a / b;
	return c;
}

// Function for modulus
int mod (int a, int b)
{
	int c;
	c = a % b;
	return c;
}

// Main function
int main ()
{
	// Declaring integers and character
	int choice,n,a,b;
	char cont;

	bool userquit = false;
	do
	{

	// Main MENU
	cout << "\n     MENU: " << endl;
	cout << "	1. Add\n	2. Subtract\n	3. Multiply\n	4. Divide\n	5. Modulus\n\n";
	cout << "Enter your choice: "; cin >> choice;
	cout << "Enter your two numbers: "; cin >> a >> b;

	switch (choice)
	{
	case 1: // Case for addition
		n = addition (a,b);
		cout << "Result: " << n;
		break;
	case 2: // Case for subtraction
		n = subtraction (a,b);
		cout << "Result: " << n;
		break;
	case 3: // Case for multiplication
		n = multiply (a,b);
		cout << "Result: " << n;
		break;
	case 4: // Case for division
		n = divide (a,b);
		cout << "Result: " << n;
		break;
	case 5:
		n = mod (a,b);
		cout << "Result: " << n;
		break;
	default:
		cout << "Invalid input, please pick (1-5). \n";
		break;
	}
	
	cout << "\n\nContinue? (Y/N)";
	cin >> cont;

	switch (cont)
	{
	case 'y': case 'Y':
		continue;
	case 'n': case 'N':
		userquit = true;
	}

	}while (!userquit);


	getch ();
	return 0;

}
