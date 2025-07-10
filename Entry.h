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
private: int shift;
public: Entry(std::string website,std::string login, std::string password);
public:void hashPassword();
public:void unHashPasword();
public: std::string getWebsite();
public: std::string getLogin();
public: std::string getPassword();
    public: int getShift();
};



#endif //DATA_H
