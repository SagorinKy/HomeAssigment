/* Kirill Sagorin st128530@student.spbu.ru
third project */
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

TEST(Decepticon, osOperator)
{
        Decepticon d;
        std::ostringstream out;
        out << d;
        EXPECT_EQ("Hello World! I'm Decepticon " + d.getName() + "!", out.str());
}
TEST(Decepticon, lesseqOperator)
{
        Transformer t("bob", 1000, 15, 15, 10);
        Transformer T("paul", 1000, 20, 20, 10);
        
	Decepticon d(2, "star", t);
	Decepticon D(3, "star", T);
	EXPECT_TRUE(d <= D);
        EXPECT_FALSE(D <= d);
}

