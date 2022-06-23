#include "account.hpp"

std::string Account::validateInput() {
	std::string userIn = "";
	while (!(std::cin >> userIn)) {
		std::cin.clear(); //clear bad input flag
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard input
		std::cout << "Invalid input; please re-enter.\n";
	}
	return userIn;
}

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
	std::cout << "Please enter a username: \n\n";
	userName = validateInput();
	system("cls");
	std::cout << "Please enter a Password: \n\n";
	password = validateInput();
	system("cls");
	std::cout << "Account created!";
}