#include <iostream>
class Emploer 
{
	public:
		int GetAge() const { return itsAge; }
		void SetAge (int age) { itsAge = age; }
		int GetYearOfService() const { return itsYearOfService; }
                void SetYearOfService (int yearOfService) { itsYearOfService = yearOfService; }
		int GetSalary () const { return itsSalary; }
                void SetSalary (int salary) { itsSalary = salary; }
	private:
		int itsAge;
		int itsYearOfService;
		int itsSalary;
};
