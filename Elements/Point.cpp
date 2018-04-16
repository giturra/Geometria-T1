//
// Created by giturrab on 01-04-18.
//

#include "Point.h"

template <class T>
Point<T>::Point(T x, T y) {
    this->x = x;
    this->y = y;
}

template <class T>
Point<T>::~Point() {

}

template <class T>
void Point<T>::setX(T x) {
    this->x = x;
}

template <class T>
void Point<T>::setY(T y) {
    this->y = y;
}

template <class T>
T Point<T>::getX() {
    return this->x;
}

template <class T>
T Point<T>::getY() {
    return this->y;
}

template <class T>
Point<T>* Point<T>::operator+(Point<T> point) {
    T x = this->getX() + point.getX();
    T y = this->getY() + point.getY();

    Point<T> *newPoint = new Point<T>(x, y);
    return newPoint;
}

template <class T>
Point<T>* Point<T>::operator-(Point<T> point) {
    T x = this->getX() - point.getX();
    T y = this->getY() - point.getY();

    Point<T> *newPoint = new Point<T>(x, y);
    return newPoint;
}

template <class T>
Point<T>* Point<T>::operator*(Point<T> point) {
    T x = this->getX() * point.getX();
    T y = this->getY() * point.getY();

    Point<T> *newPoint = new Point<T>(x, y);
    return newPoint;
}

template <class T>
Point<T>* Point<T>::operator/(Point<T> point) {
    T x = this->getX() / point.getX();
    T y = this->getY() / point.getY();

    Point<T> *newPoint = new Point<T>(x, y);
    return newPoint;
}

template class Point<int>;
template class Point<double>;
template class Point<float>;

