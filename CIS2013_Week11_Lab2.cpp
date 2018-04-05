#include <iostream>
#include <cstring>
using namespace std;

class birthdate {
private:
	int year;
	int month;
	int day;
public:
	void print() {
		cout << month << "/" << day << "/" << year;
	}

	void set(int d, int m, int y) {
		year = y;
		month = m;
		day = d;
	}
	int getYear() {
		return year;
	}

};

int main() {
	char stay;

	birthdate bob;

	/*cout << "Enter Bobs birthday day: ";
	cin >> bob.day;

	cout << "Enter Bobs birthday year: ";
	cin >> bob.year;

	cout << "Enter Bobs birthday month: ";
	cin >> bob.month;*/

	cout << "Bobs birthday is ";
	bob.print();

	cout << endl;

	birthdate tom;
	tom.set(20, 3, 1991);

	cout << "Toms birthday is ";
	tom.print();

	cin >> stay;
	return 0;
}
