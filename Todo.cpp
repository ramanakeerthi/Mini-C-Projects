#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>

void get_valid_date_input(std::string input);
bool check_valid_month(std::string month);

using namespace std;

int main() {
	cout << "Welcome to your to-do list! You have two options:\n";
	string input;
	cout << "Enter 'Check' if you'd like to check a date, or 'Write' if you'd like to write to a date: ";
	cin >> input;
	std::transform(input.begin(), input.end(), input.begin(), ::tolower);
	cout << "\n";
	while(input != "write" && input != "check") {
		cout << "Sorry! Your input didn't match one of the two options. If you'd like to continue, enter 'write' or 'check' or 'exit' to exit the program: ";
		cin >> input;
		std::transform(input.begin(), input.end(), input.begin(), ::tolower);
		if(input == "exit")
			exit(0);
	}

	get_valid_date_input(input);
}

void get_valid_date_input(std::string input) {
	if(input == "check")
		cout << "We'll need a date for you to " << input << " from!\n";
	else
		cout << "We'll need a date for you to " << input << " to!\n";

	std::string year, month, day; 
	cout << "Please enter the year: ";
	cin >> year;
	cout << "Please enter the month with correct spelling! ";
	cin >> month;
	while(!check_valid_month(month)) {
		cout << "Sorry, you entered an invalid month! Please re-enter a valid month: ";
		cin >> month;
	}
}

bool check_valid_month(std::string month) {
	std::transform(month.begin(), month.end(), month.begin(), ::tolower);
	if(month != "january" && month != "february" && month != "march" && month != "april"
		&& month != "may" && month != "june" && month != "july" && month != "august"
		&& month != "september" && month != "october" && month != "november"
		&& month != "december")
		return false;
	return true;
}