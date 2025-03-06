#include "classes.h"
#include "template.h"
#include "gtest/gtest.h"
#include <vector>

TEST(TemplClass, foo_int_true)
{
	int n = 1;
	std::vector<float> vec(5);

	int a_test = 1;
	TemplClass<int> a(a_test, n, vec);
	
	EXPECT_TRUE(a.foo());
}
TEST(TemplClass, foo_false_false)
{	
	int n = 1;
	std::vector<float> vec(5);

	float b_test = 5.5;
	TemplClass<float> b(b_test, n, vec);
	
	EXPECT_FALSE(b.foo());
}
TEST(TemplClass, foo_Class1_true)
{
	int n = 1;
	std::vector<float> vec(5);

	Class1 a = Class1();
	TemplClass<Class1> cl(a, n, vec);

	EXPECT_TRUE(cl.foo());
}
TEST(TemplClass, foo_Class1_false)
{
	int n = 0;
	std::vector<float> vec(5);
	
	Class1 a = Class1();
	TemplClass<Class1> cl(a, n, vec);
	
	EXPECT_FALSE(cl.foo());
}


TEST(TemplClass, foo_Class2_true)
{
	int n = 1;
	std::vector<float> vec(5);

	Class2 a = Class2();
	TemplClass<Class2> cl(a, n, vec);
	EXPECT_TRUE(cl.foo());
}
TEST(TemplClass, foo_Class2_false)
{
	int n = 1;
	std::vector<float> vec(0);

	Class2 a = Class2();
	TemplClass<Class2> cl(a, n, vec);

	EXPECT_FALSE(cl.foo());
}


TEST(TemplClass, foo_Class3_true)
{
	int n = -5;
	std::vector<float> vec(5);

	Class3 a = Class3();
	TemplClass<Class3> cl(a, n, vec);

	EXPECT_TRUE(cl.foo());
}
TEST(TemplClass, foo_Class3_false)
{
	int n = 1;
	std::vector<float> vec(5);

	Class3 a = Class3();
	TemplClass<Class3> cl(a, n, vec);

	EXPECT_FALSE(cl.foo());
}
