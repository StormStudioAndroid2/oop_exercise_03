#pragma once

#include "Rectangle.h"
 
    Rectangle::Rectangle(Point p1, Point p2, Point p3, Point p4) {
       if (IsRectangle(p1,p2,p3,p4)) {

    } else if (IsRectangle(p2, p3, p1, p4)) {
        std::swap(p2, p1); std::swap(p3,p2);
    } else if (IsRectangle(p3, p1, p2, p4)) {
        std::swap(p3, p1); std::swap(p3,p2);
    } else {
        throw std::logic_error("not rectangle");
    }
        points.push_back(p1);
        points.push_back(p2);
    points.push_back(p3);
    points.push_back(p4);
    }
    double Rectangle::getSquare() {
        double res = 0;
	    for (unsigned i=0; i<this->points.size(); i++) {
		Point p1 = i ? this->points[i-1] : this->points.back(),
			p2 = this->points[i];
		    res += (p1.x - p2.x * (p1.y + p2.y));
	    }
	return length(this->points[0],this->points[1])*length(this->points[0],this->points[3]);
    }
            void Rectangle::print(std::ostream& os) const {
    os << "Rectangle p1: ";
    for (int i = 0; i < this->points.size(); ++i) {
        os << this->points[i] << "p" << i+1 <<" ";
    }
    os << std::endl;
    }

void Rectangle::scan(std::istream &is) {
    Point p1,p2,p3,p4;
    is >> p1 >> p2 >> p3 >> p4;
    *this = Rectangle(p1,p2,p3,p4);
}
Point Rectangle::getCenter()  {

    Point p;
    p.x = 0;
    p.y = 0;
    for (int i = 0; i < points.size(); ++i) {
        p = p+(points[i]/points.size());
    }
    return p;
}