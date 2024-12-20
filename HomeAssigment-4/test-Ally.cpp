/* Kirill Sagorin st128530@student.spbu.ru
forth project */
#include "AllyClass.h"
#include "TransformerClass.h"
#include "gtest/gtest.h"

TEST(Ally, getAge)
{
    Ally a("BOB", 23);
    EXPECT_EQ(a.getAge(), 23);
}
TEST(Ally, getName)
{
    Ally a("BOB", 23);
    EXPECT_EQ(a.getName(), "BOB");
}
TEST(Ally, addAge)
{
    Ally a;
    a.addAge();
    EXPECT_EQ(a.getAge(), 22);
}
TEST(Ally, setAge)
{
    Ally a;
    a.setAge(32);
    EXPECT_EQ(a.getAge(), 32);
}
TEST(Ally, setName)
{
    Ally a;
    a.setName("Peter");
    EXPECT_EQ(a.getName(), "Peter");
}
TEST(Ally, isFriend)
{
    Transformer t;
    Ally a("Roman", 34);
    t.addFriend(a);
    EXPECT_TRUE(a.isFriend(t.getFriendsNames(), t.getNumber()));
}
