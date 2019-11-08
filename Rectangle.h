#pragma once

#include <vector>
#include "Figure.h"
class Rectangle: public Figure {
    protected:
        std::vector<Point> points;
    public:
     Rectangle() = default;
        Rectangle(Point p1, Point p2, Point p3, Point p4);
         double getSquare();
        Point getCenter();
         void print(std::ostream& os) const;
         void scan(std::istream &is);
};
