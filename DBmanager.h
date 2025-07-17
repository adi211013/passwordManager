//
// Created by adi on 7/17/25.
//

#ifndef DBMANAGER_H
#define DBMANAGER_H
#include <sqlite3.h>
#include <string>
#include <vector>
#include <iostream>
#include <bits/ostream.tcc>
#include "Entry.h"

class DBmanager {
    sqlite3 *db;
    bool executeSQL(const std::string &sql);
public:
    DBmanager(const std::string& dbFile);
    ~DBmanager();
    void createTable();
    bool addEntry(const Entry& entry);
    std::vector<Entry> getEntries();
};

#endif //DBMANAGER_H
