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

void Account::createAcc()
{
	std::cout << "Please enter a username: \n\n";
	userName = validateInput();
	system("cls");
	std::cout << "Please enter a Password: \n\n";
	password = validateInput();

	std::ofstream dbFile;
	dbFile.open("db.dat", std::ios::out | std::ios::app);
	dbFile << userName << ";" << password << std::endl;
	dbFile.close();

	system("cls");
	std::cout << "Account created and written to DB";
}

void Account::printName()
{
	std::cout << userName << std::endl;
}

void Account::printPass()
{
	std::cout << password << std::endl;
}
