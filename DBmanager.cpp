//
// Created by adi on 7/17/25.
//

#include "DBmanager.h"



DBmanager::DBmanager(const std::string &dbFile) {
    int rc = sqlite3_open(dbFile.c_str(), &db);
    if (rc != SQLITE_OK) {
        std::cerr << "Can't open database: " << sqlite3_errmsg(db) << std::endl;
    }
    createTable();
}
DBmanager::~DBmanager() {
    if (db)
        sqlite3_close(db);
}
bool DBmanager::executeSQL(const std::string &sql) {
    char *errMsg = nullptr;
    int rc=sqlite3_exec(db,sql.c_str(),nullptr,nullptr,&errMsg);
    if (rc != SQLITE_OK) {
        std::cerr << "SQL error: " << errMsg << std::endl;
        sqlite3_free(errMsg);
        return false;
    }
    return true;
}
void DBmanager::createTable() {
    const std::string sql = R"(
        CREATE TABLE IF NOT EXISTS entries (
            id INTEGER PRIMARY KEY AUTOINCREMENT,
            website TEXT NOT NULL,
            login TEXT NOT NULL,
            password TEXT NOT NULL,
            shift INTEGER NOT NULL
        );
    )";
    executeSQL(sql);
}
bool DBmanager::addEntry(const Entry& entry) {
    std::string sql = std::format(
        "INSERT INTO entries (website, login, password, shift) VALUES ('{}', '{}', '{}', {});",
        entry.getWebsite(),
        entry.getLogin(),
        entry.getPassword(),
        entry.getShift()
    );
    if (executeSQL(sql))
        return true;
    else return false;

}