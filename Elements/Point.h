//
// Created by giturrab on 01-04-18.
//

#ifndef TAREA1_POINT_H
#define TAREA1_POINT_H

template <class T>

class Point {
    private:
        T x = 0;
        T y = 0;

    public:
        Point(T x, T y);
        ~Point();

        void setX(T x);
        void setY(T y);

        T getX();
        T getY();

        Point<T> *operator+(Point<T> point);
        Point<T> *operator-(Point<T> point);
        Point<T> *operator*(Point<T> point);
        Point<T> *operator/(Point<T> point);
};
#endif //TAREA1_POINT_H
