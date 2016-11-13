#include "class.h"

int main ()
{
	Cat Mars;
	Mars.SetAge(4);
	Mars.Meow();
	cout << "Mars is " << Mars.GetAge() << " years\n";
	Mars.Meow();
	return 0;
}

