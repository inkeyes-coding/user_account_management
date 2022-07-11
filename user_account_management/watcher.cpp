#include "watcher.hpp"

std::string Watcher::validateInput()
{
	std::string userIn = "";
	while (!(std::cin >> userIn)) {
		std::cin.clear(); //clear bad input flag
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard input
		std::cout << "Invalid input; please re-enter.\n";
	}
	return userIn;
}

std::string Watcher::validateInt()
{
	std::string userIn = "";
	std::getline(std::cin, userIn);

	for (int i = 0; i < userIn.length(); i++) {
		if (isdigit(userIn[i]) == false) {
			
		}
	}
	return userIn;
}