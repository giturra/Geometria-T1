
#ifndef TAREA1_VECTOR_H
#define TAREA1_VECTOR_H

#include "Point.h"

template <class T>
class Vector {
    public:
    Vector();
    Vector(T x, T y, T z);
    ~Vector();

    Point<T> * getPoint();
    void setPoint(Point<T> *point);

    Vector<T> *operator+(Vector<T> vector);
    Vector<T> *operator*(Vector<T> vector);
    Vector<T> *operator^(Vector<T> vector);

    private:
        Point<T> * point;
};

#endif //TAREA1_VECTOR_H
