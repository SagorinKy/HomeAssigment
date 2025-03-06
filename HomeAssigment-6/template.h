#ifndef TEMPLATE_H
#define TEMPLATE_H

#include <iostream>
#include "classes.h"
#include <vector>

template <typename T>
class TemplClass
{
private:
	T element;
	int num;
	std::vector<float> vec = nullptr;
public:
	TemplClass (T el, int n, std::vector<float>& v) : element(el), num(n), vec(v)
	{}

	bool foo();
};

template class TemplClass<Class1>;
template class TemplClass<Class2>;
template class TemplClass<Class3>;

#endif 