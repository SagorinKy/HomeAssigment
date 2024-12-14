#include "template.h"

template <typename T>
bool TemplClass<T>::foo()
{
	return element.baz(num, vec);
}

template <>
bool TemplClass<int>::foo()
{
	return true;
}
template <>
bool TemplClass<float>::foo()
{
	return false;
}
