#include "account.hpp"

int main()
{
	Account newaccount;
	int menuSelect = 9;

	while (menuSelect != 0)
	{
		std::cout << "Welcome to the menu!" << std::endl
			<< "Please select from the following options:" << std::endl
			<< std::endl
			<< "1. Login with an existing account" << std::endl
			<< "2. Create a new account" << std::endl
			<< "0. Exit the program" << std::endl << std::endl;

		std::cin >> menuSelect;

		switch (menuSelect)
		{
			case 1:
				std::cout << "Login code here" << std::endl;
				break;
			case 2:
				std::cout << "Account creation code here" << std::endl;
				break;
			case 0:
				std::cout << "Exit code here" << std::endl;
				break;
			default:
				std::cout << "Invalid option selected. Please try again." << std::endl;
				break;
		}
	}

	/*newaccount.setName();
	newaccount.setPass();
	std::cout << std::endl;
	newaccount.printName();
	newaccount.printPass();*/

	/*std::cin.ignore();
	std::cin.get();*/
}