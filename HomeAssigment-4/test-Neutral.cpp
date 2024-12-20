/* Kirill Sagorin st128530@student.spbu.ru
forth project */
#include "NeutralClass.h"
#include "gtest/gtest.h"

TEST(Neutral, getTemp)
{
    Neutral n;
    EXPECT_EQ(n.getTemp(), 37);
}

TEST(Neutral, setTemp)
{
    Neutral n;
    n.setTemp(42);
    EXPECT_EQ(n.getTemp(), 42);
}

TEST(Neutral, getKindness)
{
    Neutral n;
    EXPECT_FLOAT_EQ(n.getKindness(), 0.6);
}

TEST(Neutral, setKindness)
{
    Neutral n;
    n.setKindness(0.9);
    EXPECT_FLOAT_EQ(n.getKindness(), 0.9);
}

TEST(Neutral, isKind_True)
{
    Neutral n;
    n.setTemp(1.0);
    EXPECT_TRUE(n.isKind());
}

TEST(Neutral, isKind_False)
{
    Neutral n;
    n.setTemp(0.4);
    EXPECT_FALSE(n.isKind());
}

TEST(Neutral, osOperator)
{
    Neutral n;
    std::ostringstream out;
    out << n;
    EXPECT_EQ("Hello World! I'm Neutral " + n.getName() + "!", out.str());
}
TEST(Neutral, lesseqOperator)
{
    Transformer t("bob", 1000, 15, 15, 10);
    Transformer T("paul", 1000, 20, 20, 10);

    Neutral n(20, 0.5, t);
    Neutral N(30, 0.6, T);
    EXPECT_TRUE(n <= N);
    EXPECT_FALSE(N <= n);
}
