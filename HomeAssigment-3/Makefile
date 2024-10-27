runClass: main.o TransformerClass.o ArmorClass.o AutobotClass.o DecepticonClass.o NeutralClass.o AllyClass.o
	g++ main.o TransformerClass.o AllyClass.o ArmorClass.o AutobotClass.o DecepticonClass.o NeutralClass.o -std=c++17 -o runClass
main.o: TransformerClass.h ArmorClass.h AutobotClass.h DecepticonClass.h NeutralClass.h AllyClass.h main.cpp
	g++ -c main.cpp -std=c++17
TransformerClass.o: TransformerClass.h TransformerClass.cpp
	g++ -c TransformerClass.cpp -std=c++17
AllyClass.o: AllyClass.h AllyClass.cpp
	g++ -c AllyClass.cpp -std=c++17
ArmorClass.o: ArmorClass.h ArmorClass.cpp
	g++ -c ArmorClass.cpp -std=c++17
AutobotClass.o: AutobotClass.h AutobotClass.cpp
	g++ -c AutobotClass.cpp -std=c++17
DecepticonClass.o: DecepticonClass.h DecepticonClass.cpp
	g++ -c DecepticonClass.cpp -std=c++17
NeutralClass.o: NeutralClass.h NeutralClass.cpp
	g++ -c NeutralClass.cpp -std=c++17

clean:
	rm -f runClass *.o TransformerClass AllyClass ArmorClass AutobotClass DecepticonClass NeutralClass