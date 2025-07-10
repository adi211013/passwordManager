//
// Created by adi on 7/10/25.
//

#ifndef DATA_H
#define DATA_H
#include <string>


class Entry {
private: std::string website;
private: std::string login;
private: std::string password;
public: Entry(std::string website,std::string login, std::string password);
};



#endif //DATA_H
