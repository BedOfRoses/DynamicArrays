#include <iostream>


class DArray
{
public:
	int* ptrArray{};

	void* source{};
	void* destination{};
	size_t* size{};
	int* index{};
	int AllocatedSize{};

	//Selve constructor for arrayet
	DArray(size_t DesiredSize)
	{
		/*
		Lagre plass i minnet med malloc
		*/

		/*std::cout << "How big do you want your array size to be: " << std::endl;
		std::cin >> AllocatedSize;

		malloc(AllocatedSize);*/


		//Hvis den som lager array ikke velger st�rrelse, sett lik null.

		if (DesiredSize == NULL)
		{
			//Hvis allocated memory er 0, free mem
			ptrArray = (int*)malloc(DesiredSize);
		}
		else 
		{
			ptrArray = (int*)malloc(DesiredSize);
		}
	}


	void AddToArray(int (*ptr)[], int index, int insertNumber)
	{
		/*
		
		//hvordan funksjonen skal se ut
		void AddToArray(selve arrayet, index, hva som addes)
		
		
		* Steg 1
		f�rst f� tak i array, og da starter man i 0 / f�rste element;
		-pointer til arrayet.
		- loop, kanskje for loop.
		- lagre siste posisjon i en pointer;

		* Steg 2
		s� finne ytterst i arrayet / siste element;
		- bruke index pointern.
		- += ? kan man sikkert.
		*/

		(* ptr)[index] += insertNumber;
		


	};

};


int main() 
{
	DArray MyArray;

	//MyArray.AddToArray()

	return 0;
}