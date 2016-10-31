#include <iostream>

using namespace std;

double delenie (double, double);

int main ()
{
	double a, b, rez = 0;
	cout << "Please, enter number one: ";
	cin >> a;
	cout << "Please, enter number two: ";
        cin >> b;
	rez = delenie (a, b);
	cout << "Result: " << rez << endl;
	return 0;
}

double delenie (double one, double two)
{
	double rezult;
	if (two)
		return rezult = one / two;
	else
	{
		cout << "Number two in zero!" << endl;
		return -1;
	}
}

