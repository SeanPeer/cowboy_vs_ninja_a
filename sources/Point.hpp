#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
using namespace std;
namespace ariel
{
    class Point
    {
    private:
        double _x;
        double _y;

    public:
        Point(double x, double y);
        ~Point();

        double distance(Point dst);
        void print() const;
        Point moveTowards(Point src, Point dst, double distance);
        bool operator==(const Point& sec) const;
 
    };
}
#endif