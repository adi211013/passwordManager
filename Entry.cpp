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
Entry::Entry(std::string website,std::string login, std::string password,int shift) {
    Entry::login = login;
    Entry::password = password;
    Entry::website = website;
    Entry::shift = shift;
}
Entry::Entry() {
    shift = std::rand()%26;
}

void Entry::hashPassword(){
    for (int i=0;i<password.length();i++) {
        password[i]=password[i]+shift;
    }
}
void Entry::unHashPasword() {
    for (int i=0;i<password.length();i++) {
        password[i]=password[i]-shift;
    }
}
std::string Entry::getWebsite() const {return website;}
std::string Entry::getLogin() const {return login;}
std::string Entry::getPassword() const {return password;}
int Entry::getShift() const {return shift;}
void Entry::getData() {
    std::print("Strona:{}, Login:{}, Haslo:{}\n",Entry::website,Entry::login,Entry::password);
}