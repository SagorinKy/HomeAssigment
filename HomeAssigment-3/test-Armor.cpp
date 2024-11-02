#include "ArmorClass.h"
#include "gtest/gtest.h"

TEST(Armor, getDur)
{
	Armor a(5, 8);
	EXPECT_EQ(a.getDur(), 5);
}

TEST(Armor, getCap)
{
	Armor a(5, 8);
	EXPECT_EQ(a.getCap(), 8);
}

TEST(Armor, setDur)
{
	Armor a(5, 8);
	a.setDur(10);
	EXPECT_EQ(a.getDur(), 10);
}

TEST(Armor, setCap)
{
	Armor a(5, 8);
	a.setCap(10);
	EXPECT_EQ(a.getCap(), 10);
}

