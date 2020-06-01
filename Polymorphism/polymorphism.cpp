#include <iostream>
#include <math.h>
using namespace std;

class GeometricShape {
// protected so classes that inherit GeometricShape can access the variables
protected:
	string name;
	double width;
	double height;
public:
	// default constructor set the width and height to 2
	GeometricShape() {
		width = 2;
		height = 2;
	};

	// non-default constructor, assuming both sides are the same, set the width and height to the value passed
	GeometricShape(int lenght) {
		width = lenght;
		height = lenght;
	}

	//non-default constructor, with two arguments, set the width to the value of aWidth and the height to the value of aHeight
	GeometricShape(int aWidth, int aHeight) {
		width = aWidth;
		height = aHeight;
	}

	// virtual funciton that will polymorph according to what class they belong to and return an area
	virtual double area() {
		return 1;
	}

	// virtual function that will polymorph according to what class they belong to and return a name
	virtual string getName() {
		return name;
	}
};

class Rectangle : public GeometricShape {
public:
	// default constructor for Square does the same as default constructor for GeometricShape
	Rectangle() : GeometricShape() {
		name = "Rectangle";
	}

	// non-default constructor for Square with one argument does the same as non-default constructor
	// for GeometricShape with one argument
	Rectangle(int side) : GeometricShape(side) {
		name = "Rectangle";
	}

	// non-default constructor for Square with two arguments does the same as non-default constructor
	// for GeometricShape with two arguments
	Rectangle(int x, int y) : GeometricShape(x, y) {
		name = "Rectangle";
	}

	// overriding Area()
	double area() {
		return width * height;
	}
};

class Circle : public GeometricShape {
public:
	// default constructor for Circle does the same as default constructor for GeometricShape
	Circle() : GeometricShape() {
		name = "Circle";
	}

	// non-default constructor for Circle with one argument does the same as non-default constructor
	// for GeometricShape with one argument
	Circle(int side) : GeometricShape(side) {
		name = "Circle";
	}

	// overriding Area()
	double area() {
		return 3.1415 * pow((width / 2), 2);
	}
};

void showArea(GeometricShape& shape) {
	cout << "Area for " << shape.getName() << " is: " << shape.area() << endl;
}

int main()
{
	Rectangle rectangleOne = Rectangle();
	Rectangle rectangleTwo = Rectangle(4);
	Rectangle rectangleThree = Rectangle(2,2);

	Circle circleOne = Circle();
	Circle circleTwo = Circle(8);

	showArea(rectangleOne);
	showArea(rectangleTwo);
	showArea(rectangleThree);
	showArea(circleOne);
	showArea(circleTwo);
	return 0;
}
