/*
Part 1.cpp
Michael Seveigny
10/30/2025
Description: The goal of this section is to write a program that counts the number
of vowels in a string from the command line. However, since it’s good programming
practice to break your problem into smaller, simpler problems, we’re going to start 
writing a program that counts the number of characters in a string. Write the function
int countCharacter(string str) that returns the number of characters in the string str.
Since this is an intermediate task, you can manually write test strings in the main 
function as string literals.
*/
#include <iostream>
#include <string>
using namespace std;

int countCharacter(string str) {
	return str.length();
}

int main() {
	string testString = "Hello, World!";
	int characterCount = countCharacter(testString);
	cout << "The number of characters in the string \"" << testString << "\" is: " << characterCount << endl;
	return 0;
}
