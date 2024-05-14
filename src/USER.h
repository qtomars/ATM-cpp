#ifndef USER_H
#define USER_H

#include <string>

class User {
public:
    User(const std::string& name); // Builder

    // Member function declarations
    std::string getName() const;

private:
    //Member variables
    std::string name;
};

#endif
