# Kirill Sagorin st128530@student.spbu.ru fifth project 
 
PROJECT = runClass

LIBPROJECT = lib$(PROJECT).a

TESTPROJECT = test-$(PROJECT)

CXX = g++

A = ar

AFLAGS = rsv

CXXFLAGS = -I. -std=c++17 -Wall -g -fPIC

LDXXFLAGS = $(CXXFLAGS) -L. -l:$(LIBPROJECT)

LDGTESTFLAGS = $(LDXXFLAGS) -lgtest -lgtest_main -lpthread

# Заголовочные файлы
DEPS = $(wildcard *.h)

# Объектные файлы основного проекта
OBJ = TransformerClass.o ArmorClass.o AutobotClass.o DecepticonClass.o NeutralClass.o AllyClass.o

# Объектные файлы для тестов
TEST-OBJ = test-virtual.o test-Armor.o test-Autobot.o test-Decepticon.o test-Neutral.o test-Ally.o test-Transformer.o

# Основные цели
.PHONY: default all clean cleanall test

# Основная цель по умолчанию
default: all

# Компиляция объектных файлов из cpp
%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

# Создание статической библиотеки
$(LIBPROJECT): $(OBJ)
	$(A) $(AFLAGS) $@ $^

# Создание основного исполняемого файла
$(PROJECT): main.o $(LIBPROJECT)
	$(CXX) -o $@ main.o $(LDXXFLAGS)

# Создание тестового исполняемого файла
$(TESTPROJECT): $(LIBPROJECT) $(TEST-OBJ)
	$(CXX) -o $@ $(TEST-OBJ) $(LDGTESTFLAGS)

# Отдельная цель для сборки всех тестов
test: $(TESTPROJECT)

# Сборка всех целей
all: $(PROJECT) $(TESTPROJECT)

# Очистка объектных файлов
clean:
	rm -f *.o

# Полная очистка
cleanall: clean
	rm -f $(PROJECT)
	rm -f $(LIBPROJECT)
	rm -f $(TESTPROJECT)

