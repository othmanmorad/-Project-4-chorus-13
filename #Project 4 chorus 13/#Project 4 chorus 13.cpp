#include <iostream>
#include "clsDynamicArray.h"
int main()
{
    clsDynamicArray<int>DynamicArray(5);
	DynamicArray.SetItem(0, 10);
	DynamicArray.SetItem(1, 20);
	DynamicArray.SetItem(2, 30);
	DynamicArray.SetItem(3, 40);
	DynamicArray.SetItem(4, 50);
	


	cout << "The Size of the Array is : " << DynamicArray.Size() << endl;
	cout << "Is the Array Empty ? " << (DynamicArray.IsEmpty() ? "Yes" : "No") << endl;
	cout << "The Array Items are : ";	
	DynamicArray.PrintList();
}

