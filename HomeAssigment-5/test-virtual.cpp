/* Kirill Sagorin st128530@student.spbu.ru
fifth project */

#include "TransformerClass.h"
#include "DecepticonClass.h"
#include "NeutralClass.h"
#include "AutobotClass.h"
#include "gtest/gtest.h"
#include <iostream>
#include <vector>
TEST(Autobot, transform) 
{
    Autobot a;

    std::ostringstream output;
    std::streambuf* oldCoutStreamBuf = std::cout.rdbuf();
    std::cout.rdbuf(output.rdbuf()); 

    a.transform();

    std::cout.rdbuf(oldCoutStreamBuf);

    EXPECT_EQ(output.str(), "Autobot : transform()\n");
}
TEST(Autobot, openFire)
{
    Autobot a;

    std::ostringstream output;
    std::streambuf* oldCoutStreamBuf = std::cout.rdbuf();
    std::cout.rdbuf(output.rdbuf());

    a.openFire();

    std::cout.rdbuf(oldCoutStreamBuf);

    EXPECT_EQ(output.str(), "Autobot : openFire()\n");
}
TEST(Autobot, ultimate)
{
    Autobot a;

    std::ostringstream output;
    std::streambuf* oldCoutStreamBuf = std::cout.rdbuf();
    std::cout.rdbuf(output.rdbuf());

    a.ultimate();

    std::cout.rdbuf(oldCoutStreamBuf);

    EXPECT_EQ(output.str(), "Autobot : ultimate()\n");
}
TEST(Decepticon, transform)
{
    Decepticon a;

    std::ostringstream output;
    std::streambuf* oldCoutStreamBuf = std::cout.rdbuf();
    std::cout.rdbuf(output.rdbuf());

    a.transform();

    std::cout.rdbuf(oldCoutStreamBuf);

    EXPECT_EQ(output.str(), "Decepticon : transform()\n");
}

TEST(Decepticon, openFire) 
{
    Decepticon a;

    std::ostringstream output;
    std::streambuf* oldCoutStreamBuf = std::cout.rdbuf();
    std::cout.rdbuf(output.rdbuf()); 

    a.openFire();

    std::cout.rdbuf(oldCoutStreamBuf);

    EXPECT_EQ(output.str(), "Decepticon : openFire()\n");
}
TEST(Decepticon, ultimate) 
{
    Decepticon a;

    std::ostringstream output;
    std::streambuf* oldCoutStreamBuf = std::cout.rdbuf();
    std::cout.rdbuf(output.rdbuf()); 

    a.ultimate();

    std::cout.rdbuf(oldCoutStreamBuf);

    EXPECT_EQ(output.str(), "Decepticon : ultimate()\n");
}
TEST(Neutral, transform) 
{
    Neutral a;

    std::ostringstream output;
    std::streambuf* oldCoutStreamBuf = std::cout.rdbuf();
    std::cout.rdbuf(output.rdbuf()); 

    a.transform();

    std::cout.rdbuf(oldCoutStreamBuf);

    EXPECT_EQ(output.str(), "Neutral : transform()\n");
}
TEST(Neutral, openFire) 
{
    Neutral a;

    std::ostringstream output;
    std::streambuf* oldCoutStreamBuf = std::cout.rdbuf();
    std::cout.rdbuf(output.rdbuf()); 

    a.openFire();

    std::cout.rdbuf(oldCoutStreamBuf);

    EXPECT_EQ(output.str(), "Neutral : openFire()\n");
}
TEST(Neutral, ultimate) 
{
    Neutral a;

    std::ostringstream output;
    std::streambuf* oldCoutStreamBuf = std::cout.rdbuf();
    std::cout.rdbuf(output.rdbuf()); 

    a.ultimate();

    std::cout.rdbuf(oldCoutStreamBuf);

    EXPECT_EQ(output.str(), "Neutral : ultimate()\n");
}

TEST(Transformer, allthreefunc)
{
    std::vector<Transformer*> transformers;

    for (int i = 0; i < 3; i++) 
    {
        transformers.push_back(new Autobot());
        transformers.push_back(new Decepticon());
        transformers.push_back(new Neutral());
    }
    std::ostringstream output;
    std::streambuf* oldCoutStreamBuf = std::cout.rdbuf();
    std::cout.rdbuf(output.rdbuf());
    for(int i = 0; i < 3; i++)
    {
        transformers[i]->transform();
    }
    for(int i = 0; i < 3; i++)
    {
        transformers[i + 3]->openFire();
    }
    for(int i = 0; i < 3; i++)
    {
        transformers[i + 6]->ultimate();
    }
    EXPECT_EQ(output.str(), "Autobot : transform()\nDecepticon : transform()\nNeutral : transform()\nAutobot : openFire()\nDecepticon : openFire()\nNeutral : openFire()\nAutobot : ultimate()\nDecepticon : ultimate()\nNeutral : ultimate()\n");
    std::cout.rdbuf(oldCoutStreamBuf);

}
