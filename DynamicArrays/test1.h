#pragma once
//#include <iostream>

//memcpy(*dest,*source,size_t steps)
//memmove() safer
//void* because it can copy basically anything


//int* arr = new int[6];
//int* newarr = new int[7];


////////////////////
////////////////////
////////////////////
////////////////////
//int arr[] = { 1,2,3,4,5 };
//int newarr[] = { 5,4,2,4 };
//
//
//int main()
//{
//	//print arr
//	std::cout << "arr: ";
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		std::cout << arr[i];
//	}
//	std::cout << "\n";
//
//	//print newarr
//	std::cout << "newarr: ";
//	for (int i = 0; i < sizeof(newarr) / sizeof(newarr[0]); i++)
//	{
//		std::cout << newarr[i];
//	}
//	std::cout << "\n";
//
//	std::cout << "memcpy-----\n";
//
//	//memcpy
//	memcpy(newarr, arr + 3, 4 * sizeof * arr);
//
//	//print arr
//	std::cout << "arr: ";
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		std::cout << arr[i];
//	}
//	std::cout << "\n";
//
//	//print newarr
//	std::cout << "newarr: ";
//	for (int i = 0; i < sizeof(newarr) / sizeof(newarr[0]); i++)
//	{
//		std::cout << newarr[i];
//	}
//	std::cout << "\n";
//
//
//	return 0;
//}

////////////////////
////////////////////
////////////////////
////////////////////




/*std::cout << arr << std::endl;

std::cout << "\n";

std::cout << newarr;*/

//char six[] = { '2','1','3','4' };
//char seven[] = {'7'};

//for (int i = 0; i < sizeof(six) / sizeof(six[0]); i++)
//{
//	std::cout << six[i] << " ";
//}
//
//std::cout << std::endl;

////memcpy(seven + 2, six + 2, sizeof(char) * 4);

//memcpy(six + 2, seven + 2, 4 * sizeof *six);


//for (int i = 0; i < sizeof(seven)/sizeof(seven[0]); i++)
//{
//	std::cout << seven[i] << " ";
//}

//std::cout << std::endl; 

////std::cout << six << std::endl;

////memcpy(six, seven, 1*sizeof(char);

////std::cout << six << std::endl;
