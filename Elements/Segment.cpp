#include <cmath>
#include <iostream>
#include "Segment.h"
#include "Point.h"

using namespace std;

template <class T>
Segment<T>::Segment(Point<T> *point1, Point<T> *point2) {
    this->point1 = point1;
    this->point2 = point2;
}

template <class T>
Point<T>* Segment<T>::getPoint1() {
    this->point1;
}

template <class T>
Point<T>* Segment<T>::getPoint2() {
    this->point2;
}

template <class T>
void Segment<T>::setPoint1(Point<T> *point1) {
    this->point1 = point1;
}

template <class T>
void Segment<T>::setPoint2(Point<T> *point2) {
    this->point1 = point2;
}

template <class T>
void Segment<T>::localize() {

    cout << "I'm a Segment and I have two Points" << endl;
    this->getPoint2()->localize();
    this->getPoint1()->localize();
    cout << "  my measure is " << this->length() << endl;

}

template <class T>
bool Segment<T>::isLeft(Point<T> *point) {
    T block1 = this->getPoint1()->getX() - this->getPoint2()->getX();
    T block2 = point->getY() - this->getPoint2()->getY();
    T block3 = this->getPoint1()->getY() - this->getPoint2()->getY();
    T block4 = point->getX() - this->getPoint2()->getX();
    T block5 = this->getPoint1()->getZ() - this->getPoint2()->getZ();
    T block6 = point->getZ() - this->getPoint2()->getZ();
    return (block1 * block2) - (block3 * block4) - (block5 * block6) > 0;
}

template <class T>
bool Segment<T>::isRight(Point<T> *point) {
    T block1 = this->getPoint1()->getX() - this->getPoint2()->getX();
    T block2 = point->getY() - this->getPoint2()->getY();
    T block3 = this->getPoint1()->getY() - this->getPoint2()->getY();
    T block4 = point->getX() - this->getPoint2()->getX();
    T block5 = this->getPoint1()->getZ() - this->getPoint2()->getZ();
    T block6 = point->getZ() - this->getPoint2()->getZ();
    return (block1 * block2) - (block3 * block4) - (block5 * block6) < 0;
}

template <class T>
bool Segment<T>::isOnMe(Point<T> *point) {
    T block1 = this->getPoint1()->getX() - this->getPoint2()->getX();
    T block2 = point->getY() - this->getPoint2()->getY();
    T block3 = this->getPoint1()->getY() - this->getPoint2()->getY();
    T block4 = point->getX() - this->getPoint2()->getX();
    T block5 = this->getPoint1()->getZ() - this->getPoint2()->getZ();
    T block6 = point->getZ() - this->getPoint2()->getZ();
    bool inLine =  (block1 * block2) - (block3 * block4) - (block5 * block6) == 0;
    bool x;
    bool y;
    bool z;

    if (this->getPoint2()->getX() < this->getPoint1()->getX()) {
        x = this->getPoint2()->getX() <= point->getX() || point->getX() <= this->getPoint1()->getX();
    } else {
        x = this->getPoint1()->getX() <= point->getX() || point->getX() <= this->getPoint2()->getX();
    }

    if (this->getPoint2()->getY() < this->getPoint1()->getY()) {
        y = this->getPoint2()->getY() <= point->getY() || point->getY() <= this->getPoint1()->getY();
    } else {
        y = this->getPoint1()->getY() <= point->getY() || point->getY() <= this->getPoint2()->getY();
    }

    if (this->getPoint2()->getZ() < this->getPoint1()->getZ()) {
        z = this->getPoint2()->getZ() <= point->getZ() || point->getZ() <= this->getPoint1()->getZ();
    } else {
        z = this->getPoint1()->getZ() <= point->getZ() || point->getZ() <= this->getPoint2()->getZ();
    }

    return inLine || x || y || z;
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

template class Vector<int>;
template class Vector<double>;
template class Vector<float>;