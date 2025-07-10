//
// Created by adi on 7/10/25.
//
#include <cstdlib>
#include "logic.h"
void clearConsole() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
