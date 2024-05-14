#ifndef ATM_H
#define ATM_H

class ATM {
public:
    ATM(); // builder

    // Member function declarations
    void deposit(float amount);
    void withdraw(float amount);
    float getBalance() const;

private:
    // Member variables
    float balance;
};

#endif
