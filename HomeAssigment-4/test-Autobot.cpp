/* Kirill Sagorin st128530@student.spbu.ru
forth project */
#include "AutobotClass.h"
#include "gtest/gtest.h"

TEST(Autobot, getRating)
{
    Autobot a;
    EXPECT_EQ(a.getRating(), 100);
}

TEST(Autobot, setRating)
{
    Autobot a;
    a.setRating(80);
    EXPECT_EQ(a.getRating(), 80);
}

TEST(Autobot, getColour)
{
    Autobot a;
    EXPECT_EQ(a.getColour(), "red");
}

TEST(Autobot, setColour)
{
    Autobot a;
    a.setColour("blue");
    EXPECT_EQ(a.getColour(), "blue");
}

TEST(Autobot, sleep)
{
    Autobot a;
    EXPECT_TRUE(a.sleep());
}

TEST(Autobot, osOperator)
{
    Autobot a;
    std::ostringstream out;
    out << a;
    EXPECT_EQ("Hello World! I'm Autobot " + a.getName() + "!", out.str());
}
TEST(Autobot, lessOperator)
{
    Transformer t("bob", 1000, 15, 15, 10);
    Transformer T("paul", 1000, 20, 20, 10);

    Autobot a(20, "red", t);
    Autobot A(30, "star", T);
    EXPECT_TRUE(a < A);
    EXPECT_FALSE(A < a);
}
TEST(Autobot, MoreOperator)
{
    Transformer t("bob", 1000, 15, 15, 10);
    Transformer T("paul", 1000, 20, 20, 10);

    Autobot a(20, "red", t);
    Autobot A(30, "star", T);
    EXPECT_FALSE(a > A);
    EXPECT_TRUE(A > a);
}


