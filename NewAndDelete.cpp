#include <iostream>


int main()
{
	/* int* int_ptr{nullptr};
	int_ptr = new int;
	std::cout << int_ptr << std::endl;
	std::cout << *int_ptr << std::endl;													SİNGLE ELEMENT POİNTER
	*int_ptr = 100;
	std::cout << *int_ptr << std::endl;
	delete int_ptr; */


	/*int* array_ptr{ nullptr };
	int size{};
	std::cout << "How big do you want the array? ";										MULTİPLE  ELEMENT POİNTER
	std::cin >> size;
	array_ptr = new int [size];
	delete[] array_ptr;*/


	/*C++ Program to store GPA of n number of students and display it where n is the number of students entered by user.*/

	int n{}; /*number of students*/
	std::cout << "How many students?";
	std::cin >> n;

	int* array_ptr{nullptr};

	array_ptr = new int[n];

	for (int i = 0; i < n; ++i)
	{
		std::cin >> array_ptr[i];
		std::cout << array_ptr[i] << " ";
	}
	delete [] array_ptr;


	return 0;
}
