#include <iostream>

/*
	//Source-help : https://www.youtube.com/watch?v=MwwbgqG6bSk

	datatype *TheArray
	TheArray = new datatype[numElements];

	delete[] TheArray;

	*/


class DynamicArray 
{
public:

	//	constructor
	DynamicArray()
	{
		i_ptr_DynArray = new int[0];
	}
	
	//	deconstrucor / delete
	~DynamicArray()
	{
		delete[] i_ptr_DynArray;
	};

	int AddToArray(int i_index) 
	{

	}



private:
	int *i_ptr_DynArray; //This is the pointer.

	int i_index;

};



int main() 
{ 



	return 0;
}