#include <iostream>
#include <iomanip>
#include <cmath>
#include "rectangleType.h"

using namespace std;

void rectangleType::setDimension(double l, double w)
{
	if (l > 0)
		length = l;
	else
	{
		cout << "Invalid length value. Setting value of the length to 2." << endl << endl;
		length = 2;
	}
	if (w > 0)
		width = w;
	else
	{
		cout << "Invalid width value. Setting value of the width to 1." << endl << endl;
		width = 1;
	}
}

double rectangleType::getLength() const
{
	return length;
}

double rectangleType::getWidth() const
{
	return width;
}

double rectangleType::area() const
{
	return (length * width);
}

double rectangleType::perimeter() const
{
	return (2 * length + 2 * width);
}

void rectangleType::print() const
{
	cout << "Length of Rectangle" << /*setw(20) << right << setfill('-') << */length << endl;
	cout << "Width of Rectangle" << /*setw(20) << right << setfill('-') << */width << endl;
	cout << endl;
	cout << "Area of Rectangle" << /*setw(20) << right << setfill('-') << */area() << endl;
	cout << "Perimeter of Rectangle" << /*setw(20) << right << setfill('-') << */perimeter() << endl;
	cout << endl << endl;
}

rectangleType::rectangleType()
{
	length = 2;
	width = 1;
}

rectangleType::rectangleType(double l, double w)
{
	setDimension(l, w);
}

/*rectangleType operator+(const rectangleType& r1, const rectangleType& r2)
{
	rectangleType tempRect;
	tempRect.length = r1.length + r2.length;
	tempRect.width = r1.width + r2.width;
	return tempRect;
}

rectangleType operator-(const rectangleType& r1, const rectangleType& r2)
{
	rectangleType tempRect;
	tempRect.length = r1.length - r2.length;
	tempRect.width = r1.width - r2.width;
	return tempRect;
}

rectangleType operator*(const rectangleType& r1, const rectangleType& r2)
{
	rectangleType tempRect;
	tempRect.length = r1.length * r2.length;
	tempRect.width = r1.width * r2.width;
	return tempRect;
}

rectangleType operator/(const rectangleType& r1, const rectangleType& r2)
{
	rectangleType tempRect;
	tempRect.length = r1.length / r2.length;
	tempRect.width = r1.width / r2.width;
	return tempRect;
}

bool operator==(const rectangleType& r1, const rectangleType& r2)
{
	return (r1.length == r2.length && r1.width == r2.width);
}

bool operator!=(const rectangleType& r1, const rectangleType& r2)
{
	return (r1.length != r2.length || r1.width != r2.width);
}

bool operator<(const rectangleType& r1, const rectangleType& r2)
{
	return (r1.length < r2.length && r1.width < r2.width);
}

bool operator<=(const rectangleType& r1, const rectangleType& r2)
{
	return (r1.length <= r2.length && r1.width <= r2.width);
}

bool operator>(const rectangleType& r1, const rectangleType& r2)
{
	return (r1.length > r2.length && r1.width > r2.width);
}

bool operator>=(const rectangleType& r1, const rectangleType& r2)
{
	return (r1.length >= r2.length && r1.width >= r2.width);
}

rectangleType& operator++(rectangleType& rectangle)
{
	rectangle.length += 1;
	rectangle.width += 1;
	return rectangle;
}

rectangleType& operator--(rectangleType& rectangle)
{
	rectangle.length -= 1;
	rectangle.width -= 1;
	return rectangle;
}

rectangleType& operator++(rectangleType& rectangle, int)
{
	rectangleType temp = rectangle;
	rectangle.length += 1;
	rectangle.width += 1;
	return temp;
}

rectangleType& operator--(rectangleType& rectangle, int)
{
	rectangleType temp = rectangle;
	rectangle.length -= 1;
	rectangle.width -= 1;
	return temp;
}*/

rectangleType rectangleType::operator+(const rectangleType& rectangle) const
{
	rectangleType tempRect;
	tempRect.length = length + rectangle.length;
	tempRect.width = width + rectangle.width;
	return tempRect;
}

rectangleType rectangleType::operator-(const rectangleType& rectangle) const
{
	rectangleType tempRect;
	tempRect.length = length - rectangle.length;
	tempRect.width = width - rectangle.width;
	return tempRect;
}

rectangleType rectangleType::operator*(const rectangleType& rectangle) const
{
	rectangleType tempRect;
	tempRect.length = length * rectangle.length;
	tempRect.width = width * rectangle.width;
	return tempRect;
}

rectangleType rectangleType::operator/(const rectangleType& rectangle) const
{
	rectangleType tempRect;
	tempRect.length = length / rectangle.length;
	tempRect.width = width / rectangle.width;
	return tempRect;
}

bool rectangleType::operator==(const rectangleType& rectangle) const
{
	return (length == rectangle.length && width == rectangle.width);
}

bool rectangleType::operator!=(const rectangleType& rectangle) const
{
	return (length != rectangle.length || width != rectangle.width);
}

bool rectangleType::operator<(const rectangleType& rectangle) const
{
	return (length < rectangle.length && width < rectangle.width);
}

bool rectangleType::operator<=(const rectangleType& rectangle) const
{
	return (length <= rectangle.length && width <= rectangle.width);
}

bool rectangleType::operator>(const rectangleType& rectangle) const
{
	return (length > rectangle.length && width > rectangle.width);
}

bool rectangleType::operator>=(const rectangleType& rectangle) const
{
	return (length >= rectangle.length && width >= rectangle.width);
}

rectangleType& rectangleType::operator++()
{
	length += 1;
	width += 1;
	return *this;
}

rectangleType& rectangleType::operator--()
{
	length -= 1;
	width -= 1;
	return *this;
}

rectangleType& rectangleType::operator++(int)
{
	rectangleType temp = *this;
	length += 1;
	width += 1;
	return temp;
}

rectangleType& rectangleType::operator--(int)
{
	rectangleType temp = *this;
	length -= 1;
	width -= 1;
	return temp;
}