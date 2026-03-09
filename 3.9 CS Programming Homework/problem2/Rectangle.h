#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
	
	double length;
	double width;
	public:
		Rectangle(double l_ = 1, double w_ = 1);
		void setLength(double l_);
		void setWidth(double w_);
		double getLength(void) const;
		double getWidth(void) const;
		double Perimeter(void) const;
		double Area(void) const;
	protected:
};

#endif
