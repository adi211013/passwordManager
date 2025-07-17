//
// Created by adi on 7/10/25.
//

#ifndef LOGIC_H
#define LOGIC_H
#include <vector>
#include "Entry.h"
#include <fstream>
#include <filesystem>
#include <vector>
#include <fstream>
#include <unistd.h>
#include <cstdlib>
#include <iostream>
#include "DBmanager.h"
void clearConsole();
void addData();
void showData();
std::vector<Entry> loadEntries();
#endif //LOGIC_H
