runClass: main.o TransformerClass.o ArmorClass.o AutobotClass.o DecepticonClass.o NeutralClass.o AllyClass.o
	g++ main.o TransformerClass.o ArmorClass.o AutobotClass.o DecepticonClass.o NeutralClass.o AllyClass.o -o runClass
main.o: TransformerClass.h main.cpp
	g++ -c main.cpp
TransformerClass.o: TransformerClass.h TransformerClass.cpp
	g++ -c TransformerClass.cpp 
AllyClass.o: AllyClass.h AllyClass.cpp
	g++ -c AllyClass.cpp 
ArmorClass.o: ArmorClass.h ArmorClass.cpp
	g++ -c ArmorClass.cpp 
AutobotClass.o: AutobotClass.h AutobotClass.cpp
	g++ -c AutobotClass.cpp 
DecepticonClass.o: DecepticonClass.h DecepticonClass.cpp
	g++ -c DecepticonClass.cpp 
NeutralClass.o: NeutralClass.h NeutralClass.cpp
	g++ -c NeutralClass.cpp 
#gtest

test-Armor.o: test-Armor.cpp
	g++ -c test-Armor.cpp
testArmor: test-Armor.o ArmorClass.o
	g++ test-Armor.o ArmorClass.o -o testArmor -lgtest -lgtest_main -pthread
test-Autobot.o: test-Autobot.cpp
	g++ -c test-Autobot.cpp
testAutobot: test-Autobot.o AutobotClass.o TransformerClass.o ArmorClass.o AllyClass.o
	g++ test-Autobot.o AutobotClass.o TransformerClass.o ArmorClass.o AllyClass.o -o testAutobot -lgtest -lgtest_main -pthread
test-Decepticon.o: test-Decepticon.cpp
	g++ -c test-Decepticon.cpp
testDecepticon: test-Decepticon.o DecepticonClass.o TransformerClass.o ArmorClass.o AllyClass.o
	g++ test-Decepticon.o DecepticonClass.o TransformerClass.o ArmorClass.o AllyClass.o -o testDecepticon -lgtest -lgtest_main -pthread
test-Neutral.o: test-Neutral.cpp
	g++ -c test-Neutral.cpp 
testNeutral: test-Neutral.o NeutralClass.o TransformerClass.o ArmorClass.o AllyClass.o
	g++ test-Neutral.o NeutralClass.o TransformerClass.o ArmorClass.o AllyClass.o -o testNeutral -lgtest -lgtest_main -pthread
test-Ally.o: test-Ally.cpp
	g++ -c test-Ally.cpp
testAlly: test-Ally.o TransformerClass.o ArmorClass.o AllyClass.o
	g++ test-Ally.o AllyClass.o TransformerClass.o ArmorClass.o -o testAlly -lgtest -lgtest_main -pthread
test-Transformer.o: test-Transformer.cpp
	g++ -c test-Transformer.cpp
testTransformer: test-Transformer.o TransformerClass.o ArmorClass.o AllyClass.o
	g++ test-Transformer.o TransformerClass.o ArmorClass.o AllyClass.o -o testTransformer -lgtest -lgtest_main -pthread


test: testArmor testAutobot testDecepticon testNeutral testAlly testTransformer
clean:
	rm -f runClass testArmor testAutobot testNeutral testDecepticon testAlly testTransformer *.o TransformerClass AllyClass ArmorClass AutobotClass DecepticonClass NeutralClass test-Armor test-Autobot test-Neutral test-Decepticon test-Ally test-Transformer
