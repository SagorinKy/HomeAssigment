/* Kirill Sagorin st128530@student.spbu.ru
Home Assigment 2b */

#include <filesystem>
#include <string>
#include <fstream>

int FileSize(std::string name);

int CountInt(const char* arr, int num);

int GetInt(const char* arr, int* n);

char* ReadFile(std::string name);

float Poland(const char* arr, int size);
