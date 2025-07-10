//
// Created by adi on 7/10/25.
//

#include "Entry.h"
Entry::Entry(std::string website,std::string login, std::string password) {
    Entry::login = login;
    Entry::password = password;
    Entry::website = website;
    shift = std::rand()%26;
}
Entry::Entry() {
    shift = std::rand()%26;
}

void Entry::hashPassword(){//TODO
    }
void Entry::unHashPasword(){}
std::string Entry::getWebsite() {return website;}
std::string Entry::getLogin() {return login;}
std::string Entry::getPassword() {return password;}
int Entry::getShift() {return shift;}
void Entry::setWebsite(std::string website) {
    Entry::website = website;
}
void Entry::setLogin(std::string login) {
    Entry::login = login;
}
void Entry::setPassword(std::string password) {
    Entry::password = password;
}