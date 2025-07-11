//
// Created by adi on 7/10/25.
//
#include <cstdlib>
#include <iostream>
#include "logic.h"
#include <fstream>
#include <filesystem>
#include "Entry.h"
#include <vector>
#include <fstream>
#include <unistd.h>


void clearConsole() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
void addData() {
    clearConsole();
    std::string website,login,password;
    std::cout<<"Podaj strone"<<std::endl;
    std::cin >> website;
    std::cout<<"Podaj login"<<std::endl;
    std::cin  >> login;
    std::cout<<"Podaj haslo"<<std::endl;
    std::cin>> password;
    Entry newEntry(website,login,password);
    newEntry.hashPassword();
    std::filesystem::create_directory("data");
    std::ofstream file("data/" + newEntry.getWebsite() + ".txt");
    if (!file.is_open()) {std::cerr << "Plik nie otworzyl sie poprawnie" << std::endl; return;}
    file<<newEntry.getShift()<<std::endl<<newEntry.getLogin()<<std::endl<<newEntry.getPassword();
    std::cout<<"Haslo zapisane"<<std::endl;
    sleep(1);
    clearConsole();
}
void showData() {
    clearConsole();
    std::vector<Entry> entries = loadEntries();
    for (int i = 0; i < entries.size(); i++) {
        entries[i].getData();
    }

}
std::vector<Entry> loadEntries() {
    std::vector<Entry> entries;
    std::string folder="data/";
    for (const auto& entry : std::filesystem::directory_iterator(folder)) {
        if (entry.is_regular_file()) {
            std::ifstream file(entry.path());
            if (!file.is_open()) continue;
            int shift;
            std::string login,password;
            file>>shift; file.ignore(); std::getline(file, login); std::getline(file,password);
            Entry newEntry(entry.path().stem(),login,password,shift);
            entries.push_back(newEntry);
        }
    }
    return entries;
}
