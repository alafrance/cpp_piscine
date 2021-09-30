#include "iter.hpp"
#include <iostream>

template<typename T>
void ft_print(T a) {
	std::cout << a << std::endl;
}

void ft_print_nb(int a) {
	std::cout << a << std::endl;
}

void ft_putstr(std::string str) {
	std::cout << str << std::endl;
}

using MyFunc = void (*)(T var);
template<typename T, typename U, typename V>
void iter2(T array, U length, MyFunc<T> &fct) {
	for (U i = 0; i < length; ++i) {
		fct(array[i]);
	}
}

int main() {
	std::string array[3] = {"first parameter", "second parameter","third parameter" };
	::iter(array, 4, ft_putstr);
	int		array_nb[3] = {4, 8, 1};
	::iter(array_nb, 3, ft_print_nb);
	::iter2(array, 3, ft_print);
}