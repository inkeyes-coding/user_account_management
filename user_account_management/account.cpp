#include "account.hpp"

void Account::setName()
{
	std::cout << "Set your user name:" << std::endl;
	std::cin >> userName;
}

void Account::setPass()
{
	std::cout << "Set your password:" << std::endl;
	std::cin >> password;
}

void Account::printName()
{
	std::cout << userName << std::endl;
}

void Account::printPass()
{
	std::cout << password << std::endl;
}

void Account::createAcc()
{
	//std::cout << "This creates an account";

}