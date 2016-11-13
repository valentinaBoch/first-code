#include "point.hpp"

class Rectangle 
{
	public:
		Rectangle (int ltop, int lbottom, int rtop, int rbottom);
		~Rectangle() {}
		int GetLTop () const { return itsLTop; }
		int GetLBottom () const { return itsLBottom; }
		int GetRTop () const { return itsRTop; }
		int GetRBottom () const { return itsRBittom; }
		
		Point GetUpperLeft () const { return itsUpperLeft; }
		Point GetLowerLeft () const { return itsLowerLeft; }
		Point GetUpperRight () const { return itsUpperRightt; }
                Point GetLowerRight () const { return itsLowerRight; }

		void SetLTop (int ltop) { itsLtop = ltop; }
		void SetLBottom (int lbottom) { itsLbottom = lbottom; }
		void SetRTop (int rtop) { itsRtop = rtop; }
                void SetRBottom (int rbottom) { itsRbottom = rbottom; }
		
		int GetArea() const;

	private:
		Point itsUpperLeft;
		Point itsLowerLeft;
		Point itsUpperRight;
		Point itsLowerRight;
		int itsLtop;
		int itsLbottom;
		int itsRtop;
		int itsRbottom;
}
