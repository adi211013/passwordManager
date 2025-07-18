//
// Created by adi on 7/10/25.
//
#include "logic.h"

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
    DBmanager db("data/database.db");
    if (!db.addEntry(newEntry))
        return;
    std::cout<<"Haslo zapisane"<<std::endl;
    sleep(1);
    clearConsole();
}
void showData() {
    clearConsole();
    DBmanager db("data/database.db");
    std::vector<Entry> entries = db.getEntries();
    for (int i = 0; i < entries.size(); i++) {
        entries[i].unHashPasword();
        entries[i].getData();
    }
    std::cout<<"Wcisnij przycisk aby powrocic do menu"<<std::endl;
    std::string tmp;
    std::cin>>tmp;
}
