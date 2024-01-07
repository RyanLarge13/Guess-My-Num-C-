#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;

void createInstance() {
	int myNum = 1 + (rand() % 100);
	int guesses = 0;
	bool found = false;
	while (found == false) {
		int guess;
		cin >> guess;
		if (guess == myNum) {
			cout << "Good job! You guessed my number " << myNum << " in " << guesses << " try" << endl;
			found = true;
		}
		if (guess < myNum) {
			cout << "Guess higher!" << endl;
			guesses += 1;
		}
		if (guess > myNum) {
			cout << "Guess lower!" << endl;
			guesses += 1;
		}
	}
}

int main() {
	cout << "Are you ready to play?" << endl << "Y(yes)/N(no)" << endl;
	bool loop = true;
	while (loop) {
		char input;
		cin >> input;
		char lower = tolower(input);
		char yes = 'y';
		char no = 'n';
		if (lower == yes) {
			cout << "Guess my number between 0 and 100" << endl;
			loop = false;
			createInstance();
		} else if (lower == no) {
			cout << "Okay, later!" << endl;
			loop = false;
		} else {
			cout << "Please try again and input a valid answer" << endl;
		}
	}
	return 0;
}