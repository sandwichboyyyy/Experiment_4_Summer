#include <iostream>
#include <conio.h>
using namespace std;

// Bubble sort function
int bubsort(int arr[], int size)
{
	// Declaring variables
	int i, j, temp, sum = 0;
	double avg;

	// Displaying inputted data
	cout << "Your data: ";
	
	for (i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	// Declaring the start of bubble sort
	cout << "\n\nAfter using bubble sort... \n\n";

	// Bubble sort loop
	for (i = 0; i < size; i++)
	{
		for (j = 0; j< size - i - 1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	// Displaying sorted data
	cout << "Sorted data: ";
	for (i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	// Return value for sorted data
	return arr[i];
}

// Main fucntion
int main()
{

	// Declaring variables
	int i, j, size, temp, arr[100];

	// Start of program
	cout << "Bubble sorting...";
	cout << "Enter the array size: "; cin >> size;
	cout << "Enter the " << size << " elements:\n\n";

	// Loop to input data depending on size of array
	for (i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	// User inputted data being managed by Bubble sorting function
	arr[100] = bubsort(arr, size);

	// End of code
	getch();
	return 0;
}


