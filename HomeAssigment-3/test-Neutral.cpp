/* Kirill Sagorin st128530@student.spbu.ru
third project */
#include "NeutralClass.h"
#include "gtest/gtest.h"

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
