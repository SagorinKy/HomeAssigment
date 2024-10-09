/* Kirill Sagorin st128530@student.spbu.ru
Home Assignment 2a */

#ifndef HEAD_T_A
#define HEAD_T_A

#include <string>
#include <fstream>
#include <filesystem>


int GetFileSize(std::string filename);
char* ReadFileInArray(std::string filename);
void ChangeDirrection(char* array, int n);

#endif
