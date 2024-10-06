program: hello_wrld.o utiltity.o
	g++ hello_wrld.o utiltity.o -o program
hello_wrld.o: hello_wrld.cpp utiltity.h
	g++ -c hello_wrld.cpp
utiltity.o: utiltity.cpp utiltity.h
	g++ -c utiltity.cpp
clean:
	rm -f program *.o
