#include <cmath>
#include "Segment.h"
#include "Point.h"

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

