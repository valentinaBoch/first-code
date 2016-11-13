#include <iostream>

using namespace std;

class Point 
{
	public:
		int GetX () const {itsX = x;}
		int GetY () const {itsY = y;}
		void SetX (int x) {return itsX;}
		void SetY (int y) {return itsY;}
	private:
		int itsX;
		int itsY
}
