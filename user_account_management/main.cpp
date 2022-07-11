#include "account.hpp"
#include "watcher.hpp"

int main()
{
	int menuSelect = 9;

	while (menuSelect != 0)
	{
		std::cout << "Welcome to the menu!" << std::endl
			<< "Please select from the following options:" << std::endl
			<< std::endl
			<< "1. Login with an existing account" << std::endl
			<< "2. Create a new account" << std::endl
			<< "0. Exit the program" << std::endl << std::endl;

		Watcher mainWatcher;
		menuSelect = stoi(mainWatcher.validateInput());
		
		system("cls");


		switch (menuSelect)
		{
			case 1: {
				std::cout << "Login code here" << std::endl;
				break;
			}
			case 2: {
				Account newAcc;
				newAcc.createAcc();
				break;
			}
			case 0: {
				std::cout << "Exit code here" << std::endl;
				break;
			}
			default: {
				std::cout << "Invalid menu option selected. Please try again." << std::endl;
				break;
			}
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin.get();
		system("cls");
	}
}