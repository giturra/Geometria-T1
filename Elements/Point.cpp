//
// Created by giturrab on 01-04-18.
//

#include <iostream>
#include <typeinfo>
#include "Point.h"

using namespace std;

template <class T>
Point<T>::Point(T x, T y, T Z) {
    this->x = x;
    this->y = y;
    this->z = z;
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
void Point<T>::setZ(T z) {
    this->z = z;
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
T Point<T>::getZ() {
    return this->z;
}

template <class T>
Point<T>* Point<T>::operator+(Point<T> point) {
    T x = this->getX() + point.getX();
    T y = this->getY() + point.getY();
    T z = this->getZ() + point.getZ();

    Point<T> *newPoint = new Point<T>(x, y, z);
    return newPoint;
}

template <class T>
Point<T>* Point<T>::operator-(Point<T> point) {
    T x = this->getX() - point.getX();
    T y = this->getY() - point.getY();
    T z = this->getZ() - point.getZ();

    Point<T> *newPoint = new Point<T>(x, y, z);
    return newPoint;
}

template <class T>
Point<T>* Point<T>::operator*(Point<T> point) {
    T x = this->getX() * point.getX();
    T y = this->getY() * point.getY();
    T z = this->getZ() * point.getZ();

    Point<T> *newPoint = new Point<T>(x, y, z);
    return newPoint;
}

template <class T>
Point<T>* Point<T>::operator/(Point<T> point) {
    T x = this->getX() / point.getX();
    T y = this->getY() / point.getY();
    T z = this->getZ() / point.getZ();

    Point<T> *newPoint = new Point<T>(x, y, z);
    return newPoint;
}

template <class T>
void Point<T>::localize() {
    cout << "I'am at (" << this->getX() << ", " << this->getY() << ", " << this->getZ() << ")" << " and my type is " <<
                                                                                                          typeid(this->getX()).name() << endl;
}

template class Point<int>;
template class Point<double>;
template class Point<float>;

