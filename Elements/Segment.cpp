#include <cmath>
#include "Segment.h"
#include "Point.h"

template <class T>
Segment<T>::Segment(Point<T> *point1, Point<T> *point2) {
    this->point1 = point1;
    this->point2 = point2;
}


template <class T>
T Segment<T>::length() {
    T x = this->point1->getX() - this->point2->getX();
    x *= x;
    T y = this->point1->getY() - this->point2->getY();
    y *= y;
    T z = this->point1->getZ() - this->point2->getZ();
    z *= x;
    T len = x + y + z;
    T result =  sqrt(len);
    return result;
}

