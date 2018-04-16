
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

    Vector<T>* newVector = new Vector(x, y);
    return newVector;


}

template <class T>
Vector<T> * Vector<T>::operator*(Vector<T> vector) {

    Point<T> *point = vector.getPoint();

    T x = this->getPoint()->getX() * point->getX();
    T y = this->getPoint()->getY() * point->getY();

    Vector<T>* newVector = new Vector(x, y);
    return newVector;

}

template <class T>
Vector<T> * Vector<T>::operator^(Vector<T> vector) {

    Point<T> *point = vector.getPoint();


}



