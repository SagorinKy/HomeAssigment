CXX = g++
CXXFLAGS = -g -Wall -pthread -I. -Werror -Wpedantic
GTEST_LIBS = -lgtest -lpthread


PROJ_FILES = $(wildcard *.cpp)
PROJ_LIBFILES = $(wildcard *.h)
OBJ_FILES = $(PROJ_FILES:.cpp=.o)
TEST_DIR = googleTesting
TEST_FILES = $(wildcard $(TEST_DIR)/*.cpp)
TEST_OBJ_FILES = $(TEST_FILES:.cpp=.o)
all: runClass test

$(OBJ_FILES): %.o : %.cpp $(PROJ_LIBFILES)
	$(CXX) $(CXXFLAGS) -c $< -o $@ 

runClass: $(OBJ_FILES) $(PROJ_LIBFILES)
	$(CXX) $(CXXFLAGS) -o runClass $(OBJ_FILES) $(GTEST_LIBS)

$(TEST_OBJ_FILES): $(TEST_DIR)/%.o : $(TEST_DIR)/%.cpp $(PROJ_LIBFILES)
	$(CXX) $(CXXFLAGS) -c $< -o $@

test: $(TEST_OBJ_FILES) $(OBJ_FILES) $(PROJ_LIBFILES)
	$(CXX) $(CXXFLAGS) -o test $(TEST_OBJ_FILES) $(OBJ_FILES) $(GTEST_LIBS)
	./test


clean:
	rm -f $(TEST_DIR)/*.o *.o
# clean only obj files

cleanall:
	rm -f $(TEST_DIR)/*.o *.o assignment6 tests
# remove all (all is *) .o files in general and TEST dirs, remove target (output) files
