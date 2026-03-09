#include "Rectangle.h"

Rectangle::Rectangle(double l_, double w_) {
	setLength(l_);
	setWidth(w_);
}

void Rectangle::setLength(double l_) {
	if(l_ < 0.0) l_ = 0;
	if(l_ > 20.0) l_ = 20.0;
	length = l_;
}

void Rectangle::setWidth(double w_) {
	if(w_ < 0.0) w_ = 0;
	if(w_ > 20.0) w_ = 20.0;
	width = w_;
}

double Rectangle::getLength() const {
	return length;
}

double Rectangle::getWidth() const {
	return width;
}

double Rectangle::Perimeter() const {
	return (getLength() + getWidth()) * 2.0;
}

double Rectangle::Area() const {
	return (getLength() * getWidth());
}

