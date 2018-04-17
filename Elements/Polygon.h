//
// Created by giturrab on 13-04-18.
//

#ifndef TAREA1_POLYGON_H
#define TAREA1_POLYGON_H

#include "Point.h"
#include "Segment.h"
#include <vector>

using namespace std;

template <class T>
class Polygon {

public:
    Polygon();
    Polygon(vector<Point<T>*> elements);

    void addPoint(Point<T>* vertex);
    bool isCCW();
    bool isInside(Point<T>* element);


    T getArea();

private:
    vector<Point<T>*> elements;

};

#endif //TAREA1_POLYGON_H
