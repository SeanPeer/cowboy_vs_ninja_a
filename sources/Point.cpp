#include <iostream>
#include "Point.hpp"
#include <cmath>

using namespace std;
namespace ariel
{
    const double a = 0.00;
    const Point b(1, 2);
    Point::Point(double x, double y) : _x(x), _y(y) {}
    Point::~Point() {}

    double Point::distance(Point dst) { return a; }
    void print();
    Point moveTowards(Point src, Point dst, double distance) { return b; }

    bool Point::operator==(const Point &sec) const
    {
        double ax = _x - sec._x;
        double ay = _y - sec._y;
        double a_dist = std::sqrt(ax * ax + ay * ay);

        double bx = sec._x - _x;
        double by = sec._y - _y;
        double b_dist = std::sqrt(bx * bx + by * by);

        return a_dist == b_dist; 
    }

}
