//
// Created by adi on 7/10/25.
//

#ifndef DATA_H
#define DATA_H
#include <string>
#include <print>


class Entry {
private: std::string website;
private: std::string login;
private: std::string password;
private: int shift;
public: Entry(std::string website,std::string login, std::string password);
public: Entry(std::string website,std::string login, std::string password, int shift);
public: Entry();
public:void hashPassword();
public:void unHashPasword();
public: std::string getWebsite();
public: std::string getLogin();
public: std::string getPassword();
public: int getShift();
public: void getData();
};

#endif //DATA_H
