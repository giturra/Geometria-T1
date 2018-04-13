#include <iostream>
#include "Elements/Point.h"

int main() {
    Point<double > *point1 = new Point<double >(3.0,3.0);
    Point<double > *point2 = new Point<double >(4.0,4.0);
    (*point2)/(*point1);

    double val = 4.0 / 3.0;

    std::cout << point2->getX() << std::endl;
    std::cout << point2->getY() << std::endl;

    return 0;
}