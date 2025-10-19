#ifndef BANK_CUSTOMER_H
#define BANK_CUSTOMER_H

#include <string>
#include <vector> // Tambahkan ini

using namespace std;

class BankCustomer {
private:
    int id;
    string name;
    double balance;
    string address;
    string phoneNumber;
    string email;
    vector<string> transactionHistory; // Tambahkan ini

public:
    BankCustomer(int id, const string& name, double balance, const string& addr, const string& phone, const string& mail);

    int getId() const;
    string getName() const;
    double getBalance() const;

    void printInfo() const;
    void printTransactionHistory() const; // Tambahkan ini
    void setName(const string& name);
    void setBalance(double balance);
    void addBalance(double amount);
    bool withdrawBalance(double amount);
};

#endif