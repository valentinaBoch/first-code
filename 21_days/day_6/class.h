#include <iostream>
using namespace std;

class Cat 
{
	private:
                int itsAge;
	public:
		int GetAge();
		void SetAge(int Age);
		void Meow();
};

int Cat::GetAge()
{
	return itsAge; 
}

void Cat::SetAge (int Age)
{
        itsAge = Age;
}

void Cat::Meow()
{
	cout << "MEOW!\n";
}

