#include "watcher.hpp"

std::string Watcher::validateInput()
{
	std::string stringIn = "";
	while (!(std::cin >> stringIn)) {
		std::cin.clear(); //clear bad input flag
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard input buffer
		std::cout << "Invalid input; please re-enter.\n";
	}
	return stringIn;
}

//std::string Watcher::validateInt()
//{
//	std::string intIn = "";
//	bool isNum = false;
//	Watcher watchingInt;
//	
//	while (isNum == false) {
//		intIn = watchingInt.validateInput();
//
//		for (int i = 0; i < intIn.length(); i++) {
//			if (isdigit(intIn[i]) == false) {
//
//			}
//
//		}
//	}
//	return intIn;
//}