#include <iostream>

using namespace std;

unsigned long int power (int, int);

int main ()
{
	int a, b;
	unsigned long int rez;
	cout << "Please, enter base: ";
	cin >> a;
	cout << "Please, enter power: ";
        cin >> b;
	rez = power (a, b);
	cout << "Result: " << rez << endl;
	return 0;
}

unsigned long int power (int a, int b)
{
	unsigned long int result;
	if (b == 0) return 1;
	else 	if (b < 1) return 1 / power(a, -b);
		else
		{
			return a * power (a, b-1);
		}
/*	a *= a;

	int i;	
	for (i = 2; i < b; i++)
		power (a, i);
	cout << "Result: " << result;
*/		
}

