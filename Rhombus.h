#pragma once

#include <vector>
#include "Figure.h"
class Rhombus: public Figure {
    private:
        Point points[4];
    public:
        Rhombus() = default;
        Rhombus(Point p1, Point p2, Point p3, Point p4);

         double getSquare();
        Point getCenter();
         void print(std::ostream& os) const;
         void scan(std::istream &is);
};
