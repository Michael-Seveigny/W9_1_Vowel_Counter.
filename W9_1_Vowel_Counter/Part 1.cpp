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
Now that you feel confident that countVowel is working, you’re going to write a command line interface for
your countVowel function. Strings should be requested from the user via a loop construct for acquiring test
data. HINT: please refer to the following demonstration program for reading in a string from the user:
// getline.cpp - John K. Estell - 07 October 2011
// demo of reading in a string from the keyboard
#include <iostream>
#include <string>
using namespace std;
int main(void) {
string input;
while ( true ) {
cout << "Enter a string or Q to quit: ";
getline( cin, input );
if ( input == "Q" ) break;
cout << "\"" << input << "\"" << endl; // do something with input
}
return 0;
}
Example run (with user input indicated with bold italics):
Enter a string or Q to quit: The quick brown fox jumped over the lazy dog.
Vowel count: 12
Enter a string or Q to quit: aeiouAEIOU
Vowel count: 10
Enter a string or Q to quit: zxcvbnm
Vowel count: 0
Enter a string or Q to quit: Q
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
int main(void) {
	string input;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		if (input == "Q") break;
		cout << "Vowel count: " << countVowel(input) << endl;
	}
	return 0;
}

