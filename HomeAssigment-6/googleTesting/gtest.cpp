#include "classes.h"
#include "template.h"
#include "gtest/gtest.h"
#include <vector>

TEST(TemplClass, foo_true)
{
	int n = 1;
	std::vector<float> vec(5);

	int a_test = 1;
	TemplClass a(a_test, n, vec);
	
	EXPECT_TRUE(a.foo());
}
TEST(TemplClass, foo_false)
{	
	int n = 1;
	std::vector<float> vec(5);

	float b_test = 5.5;
	TemplClass b(b_test, n, vec);
	
	EXPECT_FALSE(b.foo());
}
TEST(Class1, foo_true)
{
	int n = 1;
	std::vector<float> vec(5);

	Class1 a = Class1();
	EXPECT_TRUE(a.bar(n, vec));
}
TEST(Class1, foo_false)
{
	int n = 0;
	std::vector<float> vec(5);

	Class1 a = Class1();
	EXPECT_FALSE(a.bar(n, vec));
}


TEST(Class2, foo_true)
{
	int n = 1;
	std::vector<float> vec(5);

	Class2 a = Class2();
	EXPECT_TRUE(a.bar(n, vec));
}
TEST(Class2, foo_false)
{
	int n = 1;
	std::vector<float> vec(0);

	Class2 a = Class2();
	EXPECT_FALSE(a.bar(n, vec));
}


TEST(Class3, foo_true)
{
	int n = -5;
	std::vector<float> vec(5);

	Class3 a = Class3();
	EXPECT_TRUE(a.bar(n, vec));
}
TEST(Class3, foo_false)
{
	int n = 1;
	std::vector<float> vec(5);

	Class3 a = Class3();
	EXPECT_FALSE(a.bar(n, vec));
}
