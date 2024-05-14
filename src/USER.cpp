#include "User.h"

User::User(const std::string& name) : name(name) {}

std::string User::getName() const {
    return name;
}
