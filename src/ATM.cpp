#include "ATM.h"

ATM::ATM() : balance(0.0) {}

void ATM::deposit(float amount) {
    balance += amount;
}

void ATM::withdraw(float amount) {
    if (balance >= amount) {
        balance -= amount;
    }
}

float ATM::getBalance() const {
    return balance;
}
