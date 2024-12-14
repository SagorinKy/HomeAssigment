#include <iostream>
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

