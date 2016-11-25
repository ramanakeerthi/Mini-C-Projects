#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>

check_if_file_exists();

int main() {
	std::cout << "Welcome to your to-do list! You have two options:\n";
	std::string input;
	std::cout << "Enter 'Check' if you'd like to check a date, or 'Write' if you'd like to write to a date: ";
	std::cin >> input;
	std::transform(input.begin(), input.end(), input.begin(), ::tolower);
	while(input != "write" && input != "check") {
		std::cout << "Sorry! Your input didn't match one of the two options. If you'd like to continue, enter 'write' or 'check' or 'exit' to exit the program\n";
		std::cin >> input;
		if(input == "exit")
			exit(0);
	}
}