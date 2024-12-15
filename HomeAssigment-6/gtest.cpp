#include "classes.h"
#include "template.h"
#include "gtest/gtest.h"
#include <vector>

TEST(TemplClass, foo)
{
	int n = 1;
	std::vector<float> vec(5);

	int a_test;
	TemplClass a(a_test, n, vec);
	
	EXPECT_TRUE(a.foo());
}
TEST(TemplClass(float), foo)
{	
	int n = 1;
	std::vector<float> vec(5);

	float b_test = 5.5;
	TemplClass b(b_test, n, vec);
	
	EXPECT_FALSE(b.foo());
}


