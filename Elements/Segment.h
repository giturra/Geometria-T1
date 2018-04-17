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

        Point<T>* getPoint1();
        Point<T>* getPoint2();

        void setPoint1(Point<T> *point1);
        void setPoint2(Point<T> *point2);

        T length();

        void localize();

        bool isLeft(Point<T> *point);
        bool isRight(Point<T> *point);
        bool isOnMe(Point<T> *point);

    private:
        Point<T> *point1;
        Point<T> *point2;
};

#endif //TAREA1_SEGMENT_H
