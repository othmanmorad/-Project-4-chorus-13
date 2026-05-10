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
	




	// Create another Dynamic Array of integers with a size of 5 and set the items of the array to 10, 20, 30, 40 and 50.
	clsDynamicArray<int>MyDynamicArray2(6);
	MyDynamicArray2.SetItem(0, 1);
	MyDynamicArray2.SetItem(1, 2);
	MyDynamicArray2.SetItem(2, 3);
	MyDynamicArray2.SetItem(3, 4);
	MyDynamicArray2.SetItem(4, 5);
	MyDynamicArray2.SetItem(5, 6);
	cout << "\nAnother Dynamic Array of integers with a size of 5 and set the items of the array to 1, 2, 3, 4 and 5." << endl;
	MyDynamicArray2.PrintList();

	
	MyDynamicArray2.DeleteLastItem();
	cout << "\nDelete Last item() ";
	MyDynamicArray2.PrintList();

	MyDynamicArray2.DeleteFirstItem();
	cout << "\nDelete First item() ";
	MyDynamicArray2.PrintList();

	MyDynamicArray2.DeleteItemAt(2);
	cout << "\nDelete item(2) ";
	MyDynamicArray2.PrintList();

	


	cout << "\nItem at index 2 in the Array is : " << MyDynamicArray2.GetItem(2) << endl;

	// Reverse the Array and print the items of the array after reversing it.
	MyDynamicArray2.Reverse();
	cout << "After Reversing the Array, the Array Items are : ";
	MyDynamicArray2.PrintList();

	
	
	// Clear the Array and print the size of the array and the items of the array after clearing it.
	clsDynamicArray<int>MyDynamicArray3(6);
	MyDynamicArray2.Clear();
	cout << "After Clearing the Array, the Size of the Array is : " << MyDynamicArray2.Size() << endl;
	MyDynamicArray2.PrintList();


	MyDynamicArray3.SetItem(0, 100);
	MyDynamicArray3.SetItem(1, 200);
	MyDynamicArray3.SetItem(2, 300);
	MyDynamicArray3.SetItem(3, 400);
	MyDynamicArray3.SetItem(4, 500);
	cout << "\nSet the items of the array to 100, 200, 300, 400 and 5." << endl;
	MyDynamicArray3.PrintList();

	int  Index = MyDynamicArray3.Find(300);
	if (Index == -1)
	{
		
		cout << "\nThe Item 300 is not found in the Array." << endl;
	}
	else
	{
		
		cout << "\nThe Item 300 is found at index : " << Index << endl;
	}
	
	MyDynamicArray3.DeleteItemAt(0);
	cout << "\n\nAfter Deleting the item at index 0, the Array size is : ";
	cout << MyDynamicArray3.Size() << endl;
	MyDynamicArray3.PrintList();


}

