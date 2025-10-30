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
Once you’ve finished, tested, and committed the countCharacter function, rename your 
function to int countVowel(string str), and rewrite it to count the number of vowels
in the given str. Vowels are the letters a, e, i, o, and u and their uppercase variants.
Since this is an intermediate task, you can manually write test strings in the main 
function as string literals.
*/
#include <iostream>
#include <string>
using namespace std;

int countVowel(string str) {
	int vowelCount = 0;
	for (char c : str) {
		char lowerC = tolower(c);
		if (lowerC == 'a' || lowerC == 'e' || lowerC == 'i' || lowerC == 'o' || lowerC == 'u') {
			vowelCount++;
		}
	}
	return vowelCount;
}
int main() {
	string testString1 = "Hello, World!";
	string testString2 = "This is a test string.";
	cout << "Vowel count in \"" << testString1 << "\": " << countVowel(testString1) << endl;
	cout << "Vowel count in \"" << testString2 << "\": " << countVowel(testString2) << endl;
	return 0;
}

