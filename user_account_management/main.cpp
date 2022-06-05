#include "account.hpp"

int main()
{
	Account newaccount;

	newaccount.setName();
	newaccount.setPass();
	std::cout << std::endl;
	newaccount.printName();
	newaccount.printPass();

	std::cin.ignore();
	std::cin.get();
}