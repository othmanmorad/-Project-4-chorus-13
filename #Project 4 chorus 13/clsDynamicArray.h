#pragma once
#include <iostream>
using namespace std;	
template <typename T>
class clsDynamicArray
{

protected :
	int _Size;

public:

	T* OriginalArray;	
	clsDynamicArray(int Size=0)
	{
		if (Size < 0)
			Size = 0;
		
			_Size = Size;
			OriginalArray = new T[_Size];
		
			
	}

	~clsDynamicArray()
	{
		delete[] OriginalArray;
	}

	bool SetItem(int Index, T Value)
	{
		if (Index<0 || Index>_Size-1)
		{
			return false;
		}

		OriginalArray[Index] = Value;
		return true;
	}

	int Size()
	{
		return _Size;
	}

	bool IsEmpty()
	{
		return( _Size == 0 ? true : false);
	}

	void PrintList()
	{
		for (int i = 0;i <= _Size - 1; i++)
		{
			cout << OriginalArray[i] << " ";
		}
		cout << endl;
	}
};

