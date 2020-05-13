#ifndef H_rectangleType
#define H_rectangleType

#include <iostream>
#include <cmath>

using namespace std;

class rectangleType
{
	double length;
	double width;

public:
	void setDimension(double, double);
	double getLength() const;
	double getWidth() const;
	double area() const;
	double perimeter() const;
	void print() const;
	rectangleType();
	rectangleType(double l, double w);

	/*friend rectangleType operator+ (const rectangleType&, const rectangleType&);
	friend rectangleType operator- (const rectangleType&, const rectangleType&);
	friend rectangleType operator* (const rectangleType&, const rectangleType&);
	friend rectangleType operator/ (const rectangleType&, const rectangleType&);
	friend bool operator== (const rectangleType&, const rectangleType&);
	friend bool operator!= (const rectangleType&, const rectangleType&);
	friend bool operator< (const rectangleType&, const rectangleType&);
	friend bool operator<= (const rectangleType&, const rectangleType&);
	friend bool operator> (const rectangleType&, const rectangleType&);
	friend bool operator>= (const rectangleType&, const rectangleType&);
	friend rectangleType& operator++(rectangleType&); //pre
	friend rectangleType& operator--(rectangleType&); //pre
	friend rectangleType& operator++(rectangleType&, int); //post
	friend rectangleType& operator--(rectangleType&, int); //post*/

	rectangleType operator+ (const rectangleType&) const;
	rectangleType operator- (const rectangleType&) const;
	rectangleType operator* (const rectangleType&) const;
	rectangleType operator/ (const rectangleType&) const;
	bool operator== (const rectangleType&) const;
	bool operator!= (const rectangleType&) const;
	bool operator< (const rectangleType&) const;
	bool operator<= (const rectangleType&) const;
	bool operator> (const rectangleType&) const;
	bool operator>= (const rectangleType&) const;
	rectangleType& operator++(); //pre
	rectangleType& operator--(); //pre
	rectangleType& operator++(int); //post
	rectangleType& operator--(int); //post
};

#endif