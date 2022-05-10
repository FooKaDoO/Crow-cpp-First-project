#ifndef SOLVEEQUATION_H
#define SOLVEEQUATION_H

template<class T> 
void swap_ref (T &a, T &b) {
	// TODO
	T tmp = a;
	a = b;
	b = tmp;
}

template<class T> 
void swap_ptr (T *a, T *b) {
	//TODO
	T tmp = *a;
	*a = *b;
	*b = tmp;
}

bool solve (double a, double b, double c, double &x1, double &x2);

#endif
