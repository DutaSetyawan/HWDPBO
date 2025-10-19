#ifndef BUYER_H
#define BUYER_H

#include <string>
#include "bank_customer.h"
#include "cart.h"

using namespace std;

class Buyer {
private:
    int id;
    string name;
    BankCustomer *account; // DIUBAH: dari & menjadi *
    Cart cart;

public:
    Buyer(int id, const string& name, BankCustomer *account0) // DIUBAH: dari & menjadi *
        : id(id), name(name), account(account0) {}

    int getId() const { return id; }
    string getName() const { return name; }
    BankCustomer* getAccount() const { return account; } // DIUBAH: Mengembalikan pointer
    Cart& getCart() { return cart; }

    void setId(int newId) { id = newId; }
    void setName(const std::string& newName) { name = newName; }
};

#endif