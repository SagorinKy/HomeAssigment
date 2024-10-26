runClass: main.o TransformerClass.o ArmorClass.o AutobotClass.o DecepticonClass.o NeutralClass.o AllyClass.o
	g++ main.o TransformerClass.o AllyClass.o ArmorClass.o AutobotClass.o DecepticonClass.o NeutralClass.o -o runClass
main.o: TransformerClass.h ArmorClass.h AutobotClass.h DecepticonClass.h NeutralClass.h AllyClass.h main.cpp
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

clean:
	rm -f runClass *.o TransformerClass AllyClass ArmorClass AutobotClass DecepticonClass NeutralClass
