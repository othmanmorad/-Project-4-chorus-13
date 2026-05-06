#include <iostream>
#include "clsDynamicArray.h"
int main()
{
	// Create a Dynamic Array of integers with a size of 5 and set the items of the array to 10, 20, 30, 40 and 50.
    clsDynamicArray<int>MyDynamicArray(5);
	MyDynamicArray.SetItem(0, 10);
	MyDynamicArray.SetItem(1, 20);
	MyDynamicArray.SetItem(2, 30);
	MyDynamicArray.SetItem(3, 40);
	MyDynamicArray.SetItem(4, 50);
	

	// Print the size of the array, check if it is empty and print the items of the array.
	cout << "The Size of the Array is : " << MyDynamicArray.Size() << endl;
	cout << "Is the Array Empty ? " << (MyDynamicArray.IsEmpty() ? "Yes" : "No") << endl;
	cout << "The Array Items are : ";	
	MyDynamicArray.PrintList();

	// Resize the Array to 2 and print the items of the array after resizing it.
	MyDynamicArray.Resize(2);
	cout << "The Size of the Array is : " << MyDynamicArray.Size() << endl;
	cout << "After Resizing the Array to 2, the Array Items are : ";
	MyDynamicArray.PrintList();

	// Resize the Array to 10 and print the items of the array after resizing it.
	MyDynamicArray.Resize(10);
	cout << "The Size of the Array is : " << MyDynamicArray.Size() << endl;
	cout << "After Resizing the Array to 10, the Array Items are : ";
	MyDynamicArray.PrintList();
	
}

