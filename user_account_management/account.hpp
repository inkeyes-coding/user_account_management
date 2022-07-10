#pragma once
#include <iostream>
#include <string>
#include <fstream>

class Account
{
public:
    void createAcc();
    void printName();
    void printPass();

private:
    std::string userName;
    std::string password;
};