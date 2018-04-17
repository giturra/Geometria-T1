//
// Created by giturrab on 13-04-18.
//
#include "Point.h"
#include "Segment.h"
#include "Polygon.h"
#include <vector>

template <class T>
Polygon<T>::Polygon() {
    this->elements = {};
}

template <class T>
Polygon<T>::Polygon(vector<Point<T> *> elements) {
    this->elements = elements;
}

template <class T>
void Polygon<T>::addPoint(Point<T> *vertex) {
    this->elements.push_back(vertex);
}

template <class T>
bool Polygon<T>::isCCW() {
    T sum = 0;
    int N = this->elements.size();
    for (int i = 0; i < N; ++i) {
        Point<T>* p1 = elements[i % N];
        Point<T>* p2 = elements[(i + 1) % N];
        Point<T>* p3 = elements[(i + 2) % N];
        T calc = ((p2->getX() - p1->getX()) * (p3->getY() - p1->getY())) - ((p2->getY() - p1->getY()) * (p3->getX() - p1->getX()));
        sum += calc;
    }
    return sum > 0;
}

template <class T>
T Polygon<T>::getArea() {
    T sum = 0;
    int N = this->elements.size();
    for (int i = 0; i < N; ++i) {
        Point<T>* p1 = elements[i % N];
        Point<T>* p2 = elements[(i + 1) % N];
        T miniA = (p1->getX() * p2->getY()) - (p1->getY() * p2->getX());
        sum += miniA;
    }
    return sum/2;
}

template <class T>
bool Polygon<T>::isInside(Point<T>* target) {
    bool ans = true;
    int N = this->elements.size();
    for (int i = 0; i < N; ++i) {
        Point<T>* p1 = elements[i % N];
        Point<T>* p2 = elements[(i + 1) % N];
        Segment<T>* seg = new Segment<T>(p1, p2);
        if(!seg->isLeft(target)) {
            ans = !ans;
        }
    }
    return ans;
}