#include <iostream>

using namespace std;

unsigned long int Perimetr (unsigned short int, unsigned short int);

int main ()
{
	unsigned short int a, b;
	unsigned long int rez;
	cout << "Please input length 1: ";
	cin >> a;
	cout << "Please input length 2: ";
        cin >> b;
	rez = Perimetr (a, b);
	cout << "Perimetr: " << rez << endl;
	return 0;
}

unsigned long int Perimetr (unsigned short int a, unsigned short int b)
{
	unsigned long int perimetr;
	perimetr = (a + b) * 2;
}


