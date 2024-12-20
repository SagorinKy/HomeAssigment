/* Kirill Sagorin st128530@student.spbu.ru
forth project */
#include "TransformerClass.h"
#include "gtest/gtest.h"
#include <iostream>

TEST(Transformer, getFuel)
{
    Transformer t;
    EXPECT_EQ(t.getFuel(), 1000);
}
TEST(Transformer, getTank)
{
    Transformer t;
    EXPECT_EQ(t.getTank(), 1000);
}
TEST(Transformer, getName)
{
    Transformer t;
    EXPECT_EQ(t.getName(), "bob");
}
TEST(Transformer, getNumber)
{
    Transformer t;
    EXPECT_EQ(t.getNumber(), 0);
}
TEST(Transformer, getFriendsNames)
{
    Transformer t;
    EXPECT_EQ(t.getFriendsNames(), nullptr);
}
TEST(Transformer, SetFuel)
{
    Transformer t;
    t.setFuel(1500);
    EXPECT_EQ(t.getFuel(), 1000);

    t.setFuel(800);
    EXPECT_EQ(t.getFuel(), 800);
}

TEST(Transformer, SetName)
{
    Transformer t;
    t.setName("Megatron");
    EXPECT_EQ(t.getName(), "Megatron");
}

TEST(Transformer, AddFriend)
{
    Transformer t;
    Ally ally1("Ally1", 22);
    Ally ally2("Ally2", 23);

    t.addFriend(ally1);
    EXPECT_EQ(t.getNumber(), 1);

    t.addFriend(ally2);
    EXPECT_EQ(t.getNumber(), 2);

    std::string* names = t.getFriendsNames();
    EXPECT_EQ(names[0], "Ally1");
    EXPECT_EQ(names[1], "Ally2");

    delete[] names;
}

TEST(Transformer, IsOn)
{
    Transformer t;
    EXPECT_TRUE(t.isOn());
}

TEST(Transformer, osOperator)
{
    Transformer t;
    std::ostringstream out;
    out << t;
    EXPECT_EQ("Hello World! I'm Transformer " + t.getName() + "!", out.str());
}
TEST(Transformer, lesseqOperator)
{
    Transformer t("bob", 1000, 15, 15, 10);
    Transformer T("paul", 1000, 20, 20, 10);
    EXPECT_TRUE(t <= T);
    EXPECT_FALSE(T <= t);
}
