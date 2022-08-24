//#include <iostream>
//
//
//template <class DynArray>
//DynArray MyVector(size_t _SizeAllocated)
//{
//
//	//Give error if the allocated memory == 0
//	if (_SizeAllocated == NULL) {
//		return this->malloc(0);
//	}
//
//	// Set memory to _SizeAllocated
//	else
//	{
//		return this->malloc(_SizeAllocated);
//	}
//}
//
//template <class DynArray>
//class AddingToArray {
//public:
//	DynArray AddToMyVector()
//	{
//
//	}
//private:
//	int index;
//
//};
//
//
//
//
//
//
//
//
//class DArray
//{
//public:
//	int* ptrArray{};
//
//	void* source{};
//	void* destination{};
//	size_t* size{};
//	int* index{};
//	int AllocatedSize{};
//
//	//Selve constructor for arrayet
//	DArray(size_t DesiredSize)
//	{
//		/*
//		Lagre plass i minnet med malloc
//		*/
//
//		/*std::cout << "How big do you want your array size to be: " << std::endl;
//		std::cin >> AllocatedSize;
//
//		malloc(AllocatedSize);*/
//
//
//		//Hvis den som lager array ikke velger størrelse, sett lik null.
//
//		if (DesiredSize == NULL)
//		{
//			//Hvis allocated memory er 0, free mem
//			ptrArray = (int*)malloc(DesiredSize);
//			free(ptrArray);
//		}
//		else
//		{
//			ptrArray = (int*)malloc(DesiredSize);
//		}
//	}
//
//
//	void AddToArray(int(*ptr)[], int index, int insertNumber)
//	{
//		/*
//
//		//hvordan funksjonen skal se ut
//		void AddToArray(selve arrayet, index, hva som addes)
//
//
//		* Steg 1
//		først få tak i array, og da starter man i 0 / første element;
//		-pointer til arrayet.
//		- loop, kanskje for loop.
//		- lagre siste posisjon i en pointer;
//
//		* Steg 2
//		så finne ytterst i arrayet / siste element;
//		- bruke index pointern.
//		- += ? kan man sikkert.
//		*/
//
//		(*ptr)[index] += insertNumber;
//
//
//
//	};
//
//};
//
//
//int main()
//{
//	//DArray MyArray();ptrArray
//
//	//MyArray.AddToArray()
//
//	//MyVector(0);
//
//	//MyVector
//
//	return 0;
//}
//
//
//
//
////template<typename DA>
////DA copyArray(void* dst, void* scr, size_t Size){
////
////}