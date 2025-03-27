/* Kirill Sagorin st128530@student.spbu.ru
third project */
#include "TransformerClass.h"
#include "DecepticonClass.h"
#include "AutobotClass.h"
#include "ArmorClass.h"
#include "AllyClass.h"
#include "NeutralClass.h"
#include "gtest/gtest.h"

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


TEST(Neutral, getTemp) {
    Neutral n; 
    EXPECT_EQ(n.getTemp(), 37);
}

TEST(Neutral, setTemp) {
    Neutral n;
    n.setTemp(42); 
    EXPECT_EQ(n.getTemp(), 42);
}

TEST(Neutral, getKindness) {
    Neutral n; 
    EXPECT_FLOAT_EQ(n.getKindness(), 0.6); 
}

TEST(Neutral, setKindness) {
    Neutral n;
    n.setKindness(0.9); 
    EXPECT_FLOAT_EQ(n.getKindness(), 0.9); 
}

TEST(Neutral, isKind_True) {
    Neutral n;
    n.setTemp(1.0); 
    EXPECT_TRUE(n.isKind()); 
}

TEST(Neutral, isKind_False) {
    Neutral n;
    n.setTemp(0.4); 
    EXPECT_FALSE(n.isKind()); 
}



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


TEST(Autobot, getRating) {
    Autobot a; 
    EXPECT_EQ(a.getRating(), 100);
}

TEST(Autobot, setRating) {
    Autobot a;
    a.setRating(80);
    EXPECT_EQ(a.getRating(), 80);
}

TEST(Autobot, getColour) {
    Autobot a; 
    EXPECT_EQ(a.getColour(), "red");
}

TEST(Autobot, setColour) {
    Autobot a; 
    a.setColour("blue");
    EXPECT_EQ(a.getColour(), "blue");
}

TEST(Autobot, sleep) {
    Autobot a; 
    EXPECT_TRUE(a.sleep()); 
}

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
