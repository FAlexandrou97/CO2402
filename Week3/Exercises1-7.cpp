#include <iostream>
#include <string>
using namespace std;

//exercise1
void stringStats(string s) {
	int numCharacters = 0;
	int numDigits = 0;
	int numLetters = 0;
	for (int i : s) {
		numCharacters++;
		if (i >= 48 && i <= 57) {	//The character is a digit
			numDigits++;
		}
		else if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122)) {	//The character is a letter
			numLetters++;
		}
	}
	cout << "Total: " << numCharacters << "     Digits: " << numDigits << "     Letters: " << numLetters;
}
//exercise2
void reverseCase(string s) {
	string s2;
	
	for (int i : s) {
		if (i >= 65 && i <= 90)
			i += 32;	//make small
		else if (i >= 97 && i <= 122)
			i -= 32;	//make caps
		
		s2 += (char)i;	//Turn ASCII to char and append to new string
		//https://stackoverflow.com/questions/18938740/c-convert-ascii-value-to-string-in
	}
	cout << s2;
}

//exercise3
void charIndex(string s) {
	char demoChar;
	cout << "Enter character: " << endl;
	cin >> demoChar;
	int charIndex = -1;
	for (int i = 0; i <= s.length(); i++) {
		if (demoChar == s[i]) {
			charIndex = i;
			break;
		}
	}
	cout << charIndex;
}

//exercise4
void replaceChar(string s) {
	char oldChar;
	char newChar;
	cout << "Enter character to be replaced: " << endl;
	cin >> oldChar;
	cout << "Enter new character: " << endl;
	cin >> newChar;
	for (int i = 0; i <= s.length(); i++) {
		if (oldChar == s[i]) {
			s[i] = newChar;
		}
	}
	cout << s;
}

//exercise5
string reverseString(string s) {
	string s2;
	for (int i = s.length(); i >= 0; i--) {
		s2 += s[i];
	}
	return s2;
}

//exercise6
void stringBeginning(string s, string startStr) {

	for (int i = 0; i <= s.length(); i++) {
		
		if (i == startStr.length()) {
			cout << "true";
			return;
		}

		if (s[i] != startStr[i]) {
			cout << "false";
			return;
		}
	}
}

//exercise7
void stringEnding(string s, string endStr) {
	//Reverse strings
	s = reverseString(s);
	endStr = reverseString(endStr);
	//Repeat same process to get ending word
	stringBeginning(s, endStr);
}

int main()
{
	cout << "1: Display String Stats" << endl;
	cout << "2: Reverse String Case" << endl;
	cout << "3: Display Character Index in a String" << endl;
	cout << "4: Replace Character In a String" << endl;
	cout << "5: Reverse String" << endl;
	cout << "6: Find if a Specified String Starts With Another Specified String (Requires 2 Strings)" << endl;
	cout << "7: Find if a Specified String Ends With Another Specified String (Requires 2 Strings)" << endl;
	cout<<endl;
	cout << "Welcome! All functions require a string except 6-7 which require two strings." << endl;
	cout << "Enter a number from 1-7 to execute the specified function: ";
	int numFunction; 
	cin >> numFunction;
	cin.ignore();	//https://stackoverflow.com/questions/12691316/getline-does-not-work-if-used-after-some-inputs
	cout << "Enter String:" ;
	string s;
	getline(cin, s);	//https://stackoverflow.com/questions/9469264/c-cin-only-reads-the-first-word

	switch (numFunction)
	{
		case 1:
			stringStats(s);
			break;
		case 2:
			reverseCase(s);
			break;
		case 3:
			charIndex(s);
			break;
		case 4:
			replaceChar(s);
			break;
		case 5: {
			string s3;
			s3 = reverseString(s);
			cout << s3;
		}
			break;

		case 6: {
			string s2;
			cout << "Enter Second String:";
			getline(cin, s2);
			stringBeginning(s, s2);
		}			
			break;

		case 7: {
			string s2;
			cout << "Enter Second String:";
			getline(cin, s2);
			stringEnding(s, s2);
		}
			break;
	}
}
