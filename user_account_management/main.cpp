#include "account.hpp"

int main()
{
	Account newaccount;
	int menuSelect = 9;

	while (menuSelect != 0) {
		std::cout << "Welcome to the menu!"
			<< "Please select from the following options:"
			<< std::endl
			<< "1. Login with an existing account"
			<< "2. Create a new account"
			<< "0. Exit the program";


		switch (menuSelect) {
			case 1:
				std::cout << "Login code here";
			case 2:
				std::cout << "Account creation code here";
			case 0:
				std::cout << "Exit code here";
			default:
				
		}
	}

	/*newaccount.setName();
	newaccount.setPass();
	std::cout << std::endl;
	newaccount.printName();
	newaccount.printPass();

	std::cin.ignore();
	std::cin.get();*/
}