#include <iostream>

/*
* Sources
*	 https://www.youtube.com/watch?v=MwwbgqG6bSk (C++ Programming Tutorials - 30 - C++ Dynamic Arrays - Eric Liang )
*	 C++ Primer, 5th Edition, Stanley B. Lippman, Josée Lajoie, Barbara E. Moo
*	 https://www.youtube.com/watch?v=I-hZkUa9mIs (The Cherno, Templates in C++)
*/

/* Compulsory 1
* Add to the array
* expand the array
* delete from the array
* find an element in the array
* A search algorithms such as : linear OR Binary search
* !!Code at least four different sort algorithms for your array 
*	Allow user to chose which sorting array to use
*		selection sort
*		bubble sort
*		merge sort
*		quick sort
*		heap sort
*		(you can use other sort algorithms if you wish)
* 
* Write a short report 
*	explain your approach to this problem and how you solved them
*	how difficult or eary the task wa
* 
* Submission file format
*	Individual [Firstname_Lastname].zip
*/

/*
	datatype *TheArray
	TheArray = new datatype[numElements];

	delete[] TheArray;

	*/

//search function
int binarySearch(int Element);

template<typename T, int _size>
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

	int AddToArray(int i_index, T element) 
	{
		return DynAmi[i_index] += element;
	}

	void PrintA(int i) {
		std::cout << DynAmi[i];
		
	}

private:
	int *i_ptr_DynArray; //This is the pointer.

	int i_index;

	T DynAmi[_size];

};

//search function
int binarySearch(int Element)
{
	

	return 0;
}


int main() 
{ 

	DynamicArray<int, 6> Bob;

	Bob.AddToArray(1,0);
	Bob.AddToArray(2,1);
	Bob.AddToArray(3,2);
	Bob.AddToArray(4,3);
	Bob.AddToArray(5,4);
	Bob.AddToArray(6,5);

	Bob.PrintA(2);

	return 0;
}
