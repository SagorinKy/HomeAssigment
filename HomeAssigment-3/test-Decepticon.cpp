#include "DecepticonClass.h"
#include "gtest/gtest.h"
TEST(Decepticon, getRank)
{	
       Decepticon a;
       EXPECT_EQ(a.getRank(), 1);
}

TEST(Decepticon, getRegiment)
{
        Decepticon a;
        EXPECT_EQ(a.getRegiment(), "star");
}

TEST(Decepticon, setRank)
{
        Decepticon a;
        a.setRank(10);
        EXPECT_EQ(a.getRank(), 10);
}

TEST(Decepticon, setRegiment)
{
        Decepticon a;
        a.setRegiment("asteroid");
        EXPECT_EQ(a.getRegiment(), "asteroid");
}

TEST(Decepticon, isOnWar)
{
	Decepticon a;
	EXPECT_TRUE(a.isOnWar());
}
