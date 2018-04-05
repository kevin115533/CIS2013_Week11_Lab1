#include <iostream>
#include <cstring>
using namespace std;

struct myDate {
	int day;
	int month;
	int year;
};

struct person {
	myDate birthday;
	string firstname;
	string lastname;
	string age;
};

void printMyDate(myDate d);

int main() {
	char stay;

	myDate bob_bday;
	myDate tom_bday;

	person bob;
	bob.firstname = "Bob";
	bob.lastname = "Rockers";
	bob.age = "30";

	cout << "Enter" << bob.firstname << " birthday day: ";
	cin >> bob_bday.day;

	cout << "Enter Bobs birthday year: ";
	cin >> bob_bday.year;

	cout << "Enter Bobs birthday month: ";
	cin >> bob_bday.month;

	cout << "Bobs birthdate is ";
	printMyDate(bob_bday);

	cout << "Wow Tom has the same birth day ";
	tom_bday = bob_bday;
	printMyDate(bob_bday);

	cin >> stay;

	return 0;
}

void printMyDate(myDate d) {
	cout << d.month << "/" << d.day << "/" << d.year << endl;
}
