#include "1.hpp"
using namespace std;

int main ()
{
	Emploer John;
	Emploer Tom;
	int age, years, salary;
	cout << "Please, enter John's age: ";
	cin >> age;
	John.SetAge (age);
	age = 0;
	cout << "Please, enter Tom's age: ";
        cin >> age;
        Tom.SetAge (age);

	cout << "John's age: " << John.GetAge() << endl;
	cout << "Tom's age: " << Tom.GetAge() << endl;
	return 0;
}
