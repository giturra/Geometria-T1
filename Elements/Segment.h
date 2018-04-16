//
// Created by giturrab on 13-04-18.
//

#ifndef TAREA1_SEGMENT_H
#define TAREA1_SEGMENT_H

#include "Point.h"

template <class T>
class Segment {

    public:
        Segment(Point<T> *point1, Point<T> *point2);
        T length();
    private:
        Point<T> *point1;
        Point<T> *point2;
};

#endif //TAREA1_SEGMENT_H
