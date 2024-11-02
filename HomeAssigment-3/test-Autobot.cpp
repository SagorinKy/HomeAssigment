/* Kirill Sagorin st128530@student.spbu.ru
third project */
#include "AutobotClass.h"
#include "gtest/gtest.h"

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
