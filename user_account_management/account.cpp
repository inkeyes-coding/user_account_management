#include "account.hpp"
#include "watcher.hpp"

void Account::createAcc()
{
	Watcher watching;

	std::cout << "Please enter a username: \n\n";
	userName = watching.validateInput();
	system("cls");
	std::cout << "Please enter a Password: \n\n";
	password = watching.validateInput();

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
