#include "gtest/gtest.h"
#include "template.h"
#include "classes.h"

int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
