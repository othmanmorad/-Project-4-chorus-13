#pragma once
#include <iostream>
using namespace std;
template <typename T>
class clsDynamicArray
{
	// This Class is a Dynamic Array Class that can be used to create Dynamic Arrays of any type (int, float, double, string, etc.)
protected:
	// The Class has a protected member variable that holds the size of the array and a pointer to the original array and a pointer to a temporary array that is used to resize the array.
	int _Size;
	T* _TempArray;

public:


	T* OriginalArray;

	// The Class has a constructor that takes the size of the array as a parameter and initializes the original array with the given size. If the size is less than 0, it will be set to 0.
	clsDynamicArray(int Size = 0)
	{
		if (Size < 0)
			Size = 0;

		_Size = Size;
		OriginalArray = new T[_Size];


	}

	// The Class has a destructor that deletes the original array to free the memory.
	~clsDynamicArray()
	{
		delete[] OriginalArray;
	}

	// The Class has a method that takes an index and a value as parameters and sets the value at the given index in the original array. If the index is out of range, it will return false, otherwise it will return true.
	bool SetItem(int Index, T Value)
	{
		// If the index is out of range, return false
		if (Index >= _Size || _Size < 0)
		{
			return false;
		}

		// Set the value at the given index in the original array

		OriginalArray[Index] = Value;
		return true;
	}

	// The Class has a method that returns the size of the array.
	int Size()
	{
		return _Size;
	}


	// The Class has a method that returns true if the array is empty (size is 0) and false otherwise.
	bool IsEmpty()
	{
		return(_Size == 0 ? true : false);
	}

	// The Class has a method that prints the items of the array.
	void PrintList()
	{
		// Print the items of the array
		for (int i = 0;i <= _Size - 1; i++)
		{
			cout << OriginalArray[i] << " ";
		}
		cout << endl;
	}

	// The Class has a method that takes a new size as a parameter and resizes the array to the new size. If the new size is less than 0, it will be set to 0. If the new size is less than the current size, the array will be truncated to the new size. If the new size is greater than the current size, the new elements will be initialized with the default value of the type (0 for int, 0.0 for float, etc.).
	void Resize(int NewSize)
	{
		// If the new size is less than 0, set it to 0
		if (NewSize < 0)
		{
			NewSize = 0;
		};

		// Create a new temporary array with the new size
		_TempArray = new T[NewSize];

		// If the new size is less than the current size, truncate the array to the new size
		if (NewSize < _Size)
		{
			_Size = NewSize;
		}

		// Copy the items from the original array to the temporary array
		for (int i = 0;i < _Size; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}

		// If the new size is greater than the current size, initialize the new elements with the default value of the type
		_Size = NewSize;


		delete[] OriginalArray;
		// Set the original array to point to the temporary array
		OriginalArray = _TempArray;

	}

	// The Class has a method that takes an index as a parameter and returns the value at the given index in the original array. If the index is out of range, it will return the default value of the type (0 for int, 0.0 for float, etc.).
	T GetItem(int Index)
	{
		return OriginalArray[Index];
	}

	// The Class has a method that reverses the items of the array.
	void Reverse()
	{
		// Create a new temporary array with the same size as the original array
		_TempArray = new T[_Size];
		// Reverse the items of the original array and copy them to the temporary array
		int counter = 0;

		for (int i = _Size - 1;i >= 0;i--)
		{
			_TempArray[counter] = OriginalArray[i];

			counter++;
		}

		delete[] OriginalArray;// Delete the original array to free the memory
		OriginalArray = _TempArray;// Set the original array to point to the temporary array

	}

	// The Class has a method that clears the array by setting the size to 0 and creating a new original array with size 0.
	void Clear()
	{
		// Clear the array by setting the size to 0 and creating a new original array with size 0
		_Size = 0;
		_TempArray = new T[0];
		delete[] OriginalArray;// Delete the original array to free the memory
		OriginalArray = new T[_Size];// Set the original array to point to the new original array with size 0
	}

	// The Class has a method that takes an index as a parameter and deletes the item at the given index in the original array. If the index is out of range, it will return false, otherwise it will return true.
	bool DeleteItemAt(int Index)
	{
		if (Index >= _Size || Index < 0)
		{
			return false;
		}
		// Delete the item at the given index in the original array by creating a new temporary array with size one less than the original array and copying the items from the original array to the temporary array except for the item at the given index.
		_Size--;
		_TempArray = new T[_Size];

		//COPY FROM THE BEGINNING TO THE INDEX TO THE TEMPORARY ARRAY
		for (int i = 0; i < Index; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}
		//copy from after the index to the end of the original array to the temporary array
		for (int i = Index + 1; i < _Size + 1; i++)

		{
			_TempArray[i - 1] = OriginalArray[i];
		}
		delete[] OriginalArray;// Delete the original array to free the memory
		OriginalArray = _TempArray;// Set the original array to point to the temporary array
		return true;

	}
   // The Class has a method that deletes the first item in the array by calling the DeleteItemAt method with index 0 and a method that deletes the last item in the array by calling the DeleteItemAt method with index size-1.
	void DeleteFirstItem()
	{
	
	
		DeleteItemAt(0);

	}
	void DeleteLastItem()
	{
		DeleteItemAt(_Size - 1);

	}

	//find by value
	int Find(T Value)
	{
		//for each item in the original array, if the item is equal to the given value, return the index of the item in the original array. If the item is not found, return -1.
		for (int i = 0;i < _Size ;i++)
		{
			if (OriginalArray[i] == Value)
			{
				return i;
			
			}
			
		}
		return -1;
		
	}
	//Delet by value
	bool DeleteItem(T Value)
	{
		// Find the index of the item with the given value in the original array by calling the Find method. 
		int Index = Find(Value);
		if (Index == -1)
		{
			return false;
		}
		
	
			 DeleteItemAt(Index);
			 return true;
		
	}

};


