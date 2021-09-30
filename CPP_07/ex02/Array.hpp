//
// Created by Alexis Lafrance on 9/30/21.
//

#ifndef EX02_ARRAY_HPP
#define EX02_ARRAY_HPP
#include <iostream>

template<typename T>
class Array
{
private:
	T *array;
	int size;
public:
	Array() {
		array = new T;
		size = 0;
	};
	explicit Array(unsigned int n ) {
		array = new T[n];
		size = n;
		for (unsigned int i = 0; i < n; ++i) {
			array[i] = 0;
		}
	};
	Array &operator=(Array const &inst) {
		(void)inst;
		//		std::cout << std::begin(inst.array);
		//		std::copy(std::begin(inst.array), std::end(inst.array), std::begin(array));
		return (*this);
	};
	Array(Array const &src) {
		*this = src;
	}
	virtual ~Array() {
		delete array;
	};
	void display() {
		for (int i = 0; i < size; ++i) {
			std::cout << array[i] << std::endl;

		}
	}
};

#endif //EX02_ARRAY_HPP
