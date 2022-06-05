#pragma once
#include <iostream>
#include <string>

class Account
{
public:
    void setName();
    void setPass();
    void printName();
    void printPass();

private:
    std::string userName;
    std::string password;
};