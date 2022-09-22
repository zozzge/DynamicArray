#include <iostream>
#include"DynArray.h"



int main() {

	DynamicArray dynArray(3, 2);

	std::cout << "size: " << dynArray.GetSize() << std::endl;
	std::cout << "item count: " << dynArray.GetCount() << std::endl;

	dynArray.Add(20);
	dynArray.Add(10);

	std::cout<<"\n" << std::endl;

	std::cout << "size: " << dynArray.GetSize() << std::endl;
	std::cout << "item count: " << dynArray.GetCount() << std::endl;

	for (int i = 0; i < dynArray.GetCount(); i++) {

		std::cout << "#" << i << " - " << dynArray.Get(i) << std::endl;
	}

    dynArray.Add(30);

	std::cout << "\n" << std::endl;

	for (int i = 0; i < dynArray.GetCount(); i++) {

		std::cout << "#" << i << " - " << dynArray.Get(i) << std::endl;
	}

	std::cout << "size: " << dynArray.GetSize() << std::endl;
	std::cout << "item count: " << dynArray.GetCount() << std::endl;

	dynArray.Add(50);
	dynArray.Add(40);

	std::cout << "\n" << std::endl;

	for (int i = 0; i < dynArray.GetCount(); i++) {

		std::cout << "#" << i << " - " << dynArray.Get(i) << std::endl;
	}

	std::cout << "size: " << dynArray.GetSize() << std::endl;
	std::cout << "item count: " << dynArray.GetCount() << std::endl;

	dynArray.Remove(3);

	std::cout << "\n" << std::endl;

	std::cout << "size: " << dynArray.GetSize() << std::endl;
	std::cout << "item count: " << dynArray.GetCount() << std::endl;

	for (int i = 0; i < dynArray.GetCount(); i++) {

		std::cout << "#" << i << " - " << dynArray.Get(i) << std::endl;
	}

	dynArray.Insert(2, 25);

	std::cout << "\n" << std::endl;

	for (int i = 0; i < dynArray.GetCount(); i++) {

		std::cout << "#" << i << " - " << dynArray.Get(i) << std::endl;
	}

	std::cout << "size: " << dynArray.GetSize() << std::endl;
	std::cout << "item count: " << dynArray.GetCount() << std::endl;

	dynArray.Sort();

	for (int i = 0; i < dynArray.GetCount(); i++) {

		std::cout << "#" << i << " - " << dynArray.Get(i) << std::endl;
	}

	dynArray.Shrink();

	std::cout << "size: " << dynArray.GetSize() << std::endl;
	std::cout << "item count: " << dynArray.GetCount() << std::endl;


	





}