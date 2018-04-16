
#include <cmath>
#include "Point.h"
#include "Vector.h"

template <class T>
Vector<T>::Vector() {
    this->point = new Point<T>(0, 0, 0);
}

template <class T>
Vector<T>::Vector(T x, T y, T z) {

this->point = new Point<T>(x, y, z);

}

template <class T>
Point<T>* Vector<T>::getPoint() {
    return this->point;
}

template <class T>
void Vector<T>::setPoint(Point<T> *point) {
    delete this->point;
    this->point = point;
}

template <class T>
Vector<T>* Vector<T>::operator+(Vector<T> vector) {
    Point<T> *point = vector.getPoint();
    T x = this->getPoint()->getX() + point->getX();
    T y = this->getPoint()->getY() + point->getY();
    T z = this->getPoint()->getZ() + point->getZ();

    Vector<T>* newVector = new Vector(x, y, z);
    return newVector;


}

template <class T>
Vector<T> * Vector<T>::operator*(Vector<T> vector) {
    Point<T> *point = vector.getPoint();
    T x = this->getPoint()->getX() * point->getX();
    T y = this->getPoint()->getY() * point->getY();
    T z = this->getPoint()->getZ() * point->getZ();
    Vector<T>* newVector = new Vector(x, y);
    return newVector;

}

template <class T>
Vector<T> * Vector<T>::operator^(Vector<T> vector) {
    Point<T> *point = vector.getPoint();
    T x = (this->point->getY() * point->getZ()) - (this->point->getZ() - point->getY());
    T y = (this->point->getZ() * point->getX()) - (this->point->getX() - point->getZ());
    T z = (this->point->getX() * point->getY()) - (this->point->getY() - point->getX());
    Vector<T>* newVector = new Vector(x, y);
    return newVector;
}

template <class T>
T Vector<T>::norm() {
        T x = this->point->getX() * this->point->getX();
        T y = this->point->getY() * this->point->getY();
        T z = this->point->getZ() * this->point->getZ();
        T value = sqrt(x + y + z);
        return value;
}

template <class T>
void Vector<T>::normalizedVector() {
    T norm = this->norm();
    T x = this->point->getX() / norm;
    T y = this->point->getY() / norm;
    T z = this->point->getZ() / norm;
    Point<T> *point = new Point(x, y, z);
    this->setPoint(point);
}


template class Point<int>;
template class Point<double>;
template class Point<float>;