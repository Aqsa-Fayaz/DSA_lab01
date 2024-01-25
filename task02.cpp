////task 02
///*Implement a class named Point to represent a point with x and y coordinates. The class contains:
// Two attributes x and y that represent coordinates.
// Methods to get and set these attributes.
// A constructor that creates a point with specified coordinates.
//A method named distance that returns the distance from the current point to another point whose x
//and y coordinates are sent as arguments.*/
//#include <iostream>
//#include <cmath>
//using namespace std;
////class
//class Point {
//	float x, y;
//public:
//	//default constructor
//	Point() : x(0.0), y(0.0) {}
//	//parameterized constructor
//	Point(float a,float b) : x(a), y(b){}
//	//setters
//	void setX(float a)
//	{
//		x = a;
//	}
//	void setY(float b)
//	{
//		y = b;
//	}
//	//getters
//	float getX()
//	{
//		return x;
//	}
//	float getY()
//	{
//		return y;
//	}
//	//function to calculate distance
//	float distance(Point& obj)
//	{
//		float dist = sqrt((this->x - obj.x)*(x - obj.x) + (y - obj.y)*(y - obj.y));
//		return dist;
//	}
//};
//
//
//int main()
//{
//	int w, x, y, z;
//	//user input
//	cout << "Enter the coordinates of the first point(x1,y1): ";
//	cin >> w >> x;
//	cout << "Enter the coordinates of the second point(x2,y2): ";
//	cin >> y >> z;
//	//objects
//	Point p1(w, x);
//	Point p2(y, z);
//	//function calling 
//	int distanceVal = p1.distance(p2);
//	cout << "The distance between the two points is " << distanceVal << endl;
//
//	return 0;
//}