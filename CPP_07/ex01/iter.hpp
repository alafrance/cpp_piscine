#ifndef ITER
#define ITER
template<typename T, typename U, typename V>
void iter(T array, U length, V &fct) {
	for (U i = 0; i < length; ++i) {
		fct(array[i]);
	}
}
#endif